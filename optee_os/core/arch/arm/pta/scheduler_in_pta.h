


int tasks_init = 0;


//extern struct secure_task * secure_world_tasks;   


// we will keep a task state struct 


struct secure_task secure_world_tasks[SECURE_WORLD_MAX_TASKS]; 
extern void secure_task_trace(struct secure_task sec_tsk);
extern s_time_t getCurrentTime();
void initSecureWorldTasks_local(int param);
void doing_job(int param);
void do_secure_world_scheduling_local(int coreNum);
void init_tasks_in_pta(int coreNum);




void initSecureWorldTasks_local(int param)
{
	// this initialize the TA, further invocation to secure world should be just a resume
	// jinwen comment
	//prepare_and_invoke_ta(3);	
	//prepare_and_invoke_ta(20);

	//FIXME: jinwen: insert exact tasks here and initialize the priorities
	//runing time: 1ms
	secure_world_tasks[0].taskUid = 0;
	secure_world_tasks[0].period = 4000;
	secure_world_tasks[0].priority = 0;
	secure_world_tasks[0].numOfJobReleased = 0;
	secure_world_tasks[0].numOfJobDlMissed = 0;
	secure_world_tasks[0].lastCompletionOfJob = 0;
	secure_world_tasks[0].lastReleaseOfJob = 0;
	secure_world_tasks[0].coreNum = 0;
	secure_world_tasks[0].PtaParam = 0;
	secure_world_tasks[0].loopCounter = 0;

	//running time: 1.5ms
	secure_world_tasks[1].taskUid = 1;
	secure_world_tasks[1].period = 8000;
	secure_world_tasks[1].priority = 1;
	secure_world_tasks[1].numOfJobReleased = 0;
	secure_world_tasks[1].numOfJobDlMissed = 0;
	secure_world_tasks[1].lastCompletionOfJob = 0;
	secure_world_tasks[1].lastReleaseOfJob = 0;
	secure_world_tasks[1].coreNum = 0;
	secure_world_tasks[1].PtaParam = 0;
	secure_world_tasks[1].loopCounter = 0;

}

void doing_job(int param){
	IMSG("doing Job\n");
}

void do_secure_world_scheduling_local(int coreNum)
{
	IMSG("Scheduling Secure World: \n", coreNum);
	// loops through all the secure task
	for(int i = 0; i < SECURE_WORLD_MAX_TASKS; i++)
	{	

		secure_task_trace(secure_world_tasks[i]);
		// if we are on the right core
		if(secure_world_tasks[i].coreNum == coreNum)
		{

			if( // if the secure world last released task is completed
				secure_world_tasks[i].lastCompletionOfJob >= secure_world_tasks[i].lastReleaseOfJob &&
				// if the new job for the task is ready to be released
			    getCurrentTime() - secure_world_tasks[i].lastReleaseOfJob >= secure_world_tasks[i].period  
			)
			{
				IMSG("Release Job %d \n", i);
				secure_world_tasks[i].loopCounter = 0;  								// reset the counter 

				// FIXME: this count is not accurate - possible concurrency issue here, but should be fine after ruide's fix
				secure_world_tasks[i].numOfJobReleased++; 
				
				// if the completion is after one period, it missed the deadline 
				if(secure_world_tasks[i].lastCompletionOfJob >= secure_world_tasks[i].lastReleaseOfJob + secure_world_tasks[i].period)
					secure_world_tasks[i].numOfJobDlMissed++;

				if(secure_world_tasks[i].lastReleaseOfJob == 0)
					secure_world_tasks[i].lastReleaseOfJob = getCurrentTime();
				else
					secure_world_tasks[i].lastReleaseOfJob += secure_world_tasks[i].period; // release the next job
			}

			// if we have released a job but not yet completed 
			if(secure_world_tasks[i].lastReleaseOfJob >= secure_world_tasks[i].lastCompletionOfJob)
			{
				// FIXME: this should be a lot more formal 
				// - currently we are using release time and complete time to decide where a task should be run or not
				// - we are also using the loop counter to keep track of where to resume , this really need to be fixed, and ruide is looking into it

				// FIXME: we should be invoking different PTA, but since different STACK, should be fine for now
				// since we assume it is sorted, we will execute the first one we found
				IMSG("Executing Job %d \n",i);
				//prepare_and_invoke_ta(i);
				doing_job(3);
				//rd_test();
				// when the task finishes execution it would return here
				secure_world_tasks[i].lastCompletionOfJob = getCurrentTime();
				IMSG("Finishing Job %d \n", i);
			}
		}		
	}
}

void init_tasks_in_pta(int coreNum){
	if(tasks_init == 0){
		tasks_init = 1;
		initSecureWorldTasks_local(1);
		IMSG("Finishing tasks init\n");
	}
	else{
		do_secure_world_scheduling_local(coreNum);
	}
}