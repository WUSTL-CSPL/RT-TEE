cmake_minimum_required (VERSION 3.2)
project (benchmark C)

# Default cross compile settings
set (CMAKE_TOOLCHAIN_FILE CMakeToolchain.txt)

################################################################################
# Packages
################################################################################
find_package(Threads REQUIRED)
if(NOT THREADS_FOUND)
	message(FATAL_ERROR "Threads not found")
endif()

include(GNUInstallDirs)

################################################################################
# Compiler flags:
#   We want to use the same flags in the entire optee_client git
################################################################################
add_compile_options (
	-Wall -Wextra -Werror
#	-Wall -Wbad-function-cast -Wcast-align
#	-Werror-implicit-function-declaration -Wextra
#	-Wfloat-equal -Wformat-nonliteral -Wformat-security
#	-Wformat=2 -Winit-self -Wmissing-declarations
#	-Wmissing-format-attribute -Wmissing-include-dirs
#	-Wmissing-noreturn -Wmissing-prototypes -Wnested-externs
#	-Wpointer-arith -Wshadow -Wstrict-prototypes
#	-Wswitch-default -Wunsafe-loop-optimizations
#	-Wwrite-strings -Werror -fPIC
# 	-Wno-missing-field-initializers
)

find_program(CCACHE_FOUND ccache)
if(CCACHE_FOUND)
	set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE ccache)
	set_property(GLOBAL PROPERTY RULE_LAUNCH_LINK ccache)
endif(CCACHE_FOUND)

set (SRC
	main.c
	benchmark_aux.c
)

################################################################################
# Built binary
################################################################################
add_executable (${PROJECT_NAME} ${SRC})

target_link_libraries (${PROJECT_NAME}
	PRIVATE ${CMAKE_THREAD_LIBS_INIT}
	PRIVATE teec
	PRIVATE yaml
	PRIVATE m
)

################################################################################
# Install targets
################################################################################
install (TARGETS ${PROJECT_NAME} DESTINATION ${CMAKE_INSTALL_BINDIR})
