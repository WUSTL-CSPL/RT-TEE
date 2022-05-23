typedef unsigned long s_time_t;

/*
 * Default parameters:
 * Period and budget in default is 10 and 4 ms, respectively
 */
#define RTDS_DEFAULT_PERIOD     10000
#define RTDS_DEFAULT_BUDGET     4000

/*
 * Max period: max delta of time type
 * Min period: 100 us, considering the scheduling overhead
 */
// #define RTDS_MAX_PERIOD     	(STIME_DELTA_MAX)
// #define RTDS_MIN_PERIOD     	(MICROSECS(100))

/*
 * Min budget: 100 us
 */
// #define RTDS_MIN_BUDGET     	(MICROSECS(100))

#define UPDATE_LIMIT_SHIFT      10
// #define MAX_SCHEDULE            (MILLISECS(1))


#define NUM_OF_SECURITY_STATES 	2
#define NUM_OF_CORES           	4 


#define RUNQ_RUNNING			0
#define RUNQ_RUNNABLE 			1
#define RUNQ_OUT_OF_BUDGET     	2
#define RUNQ_NOTHING_TO_RUN     3

#define SECURE_STATE      		0
#define NONSECURE_STATE   		1

#define SCHEDULER_TICK 			1000

#define IDLE_PROCESSING_THROTTLE 1
#define IDLE_PROCESSING_YIELD    0 





#define SECURE_WORLD_MAX_PRIORITY 10
#define SECURE_WORLD_MAX_TASKS    5

#define ONE_MS_LOOP_CNT 69853 //1 milli second workload 69853
#define NUM_OF_JOBS 55
#define NUM_OF_MEASURED 50





struct rt_world {

	int runq_status;
    // struct list_head q_elem;    /* on the runq/depletedq list */

    unsigned int priority;		// 0 is higher

    /* security world parameters, in nanoseconds */
    s_time_t period;
    long budget;

    /* security world current infomation in nanosecond */
    long cur_budget;        /* current budget */
    s_time_t last_start;        /* last start time */
    s_time_t cur_deadline;      /* current deadline for EDF */
    s_time_t last_rpl_time;     /* last replenish time */
    s_time_t nextEarliestJobRelease; // next earliest job release
    bool has_nothing_to_run;

};

struct secure_task
{
	//int runq_status;					// it can be running or runnable  -- seems like we don't need this?

	unsigned int taskUid;				// the unique id of the task 
	s_time_t period;					// the period of the task, we assume the deadline is release + period
	//long budget;						// well, for the current task model, we don't have the concept of the 
	unsigned int priority;				// the priority of the task, this will be set by the scheduling algorithm such as RM,DM
	unsigned int numOfJobReleased;      // captures how many jobs this task release
	unsigned int numOfJobCompleted;		// capture how many jobs this task has finished
	unsigned int numOfJobDlMissed;      // catpures how many jobs miss their deadline
	s_time_t lastCompletionOfJob;		// the last time a job for this task is completed
	s_time_t lastReleaseOfJob;          // this variable stores the time of the job 
	int coreNum;  						// the core number the task is pinned to, this is only useful in partitioned scheduling

	// PTA call number 
	int PtaParam; 						// FIXME: this should be individual PTA, it is a lot more cleaner 
	long long loopCounter;					// FIXME: this should be removed, because the context should be resumed, instead of loading this counter
	long long whole_loop;						// overall loops of the whole task
};
