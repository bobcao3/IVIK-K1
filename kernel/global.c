/**
 * proc.c
 */

#define GLOBAL_VARIABLES_HERE

#include "type.h"
#include "const.h"
#include "protect.h"
#include "proto.h"
#include "proc.h"
#include "global.h"
#include "ipc.h"

PUBLIC	PROCESS			proc_table[NR_TASKS];

PUBLIC	char			task_stack[STACK_SIZE_TOTAL];

PUBLIC	TASK			task_table[NR_TASKS] = {{Init, STACK_SIZE_TESTA, "Init"},{Test, STACK_SIZE_TESTA, "Test"}};

PUBLIC	irq_handler		irq_table[NR_IRQ];

PUBLIC	system_call		sys_call_table[NR_SYS_CALL] = {sys_get_ticks, ipc_async_send};
