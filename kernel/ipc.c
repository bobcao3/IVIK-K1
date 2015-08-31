/**
 * ipc.c
 */

#include "ipc.h"

message* msg[1024];
int msgs = 0;

// message can be a pointer or a char or a number
PUBLIC void ipc_async_send(message* m)
{
	msgs = (msgs + 1) % 1024;
	message foo = *m;
	disp_int(foo.type);
	msg[msgs] = m;
	return;
}

message* ipc_async_receive(int pid)
{
	int i;
	message b;
	for (i = 0; i++; i < 1024) {
		b = *msg[i];
		if (b.dst == pid) {
			return msg[i];
		}
	}
	return &none_msg;
}
