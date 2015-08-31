/**
 * ipc.h
 */

#include "type.h"
#include "const.h"

typedef struct ipcmessage {
	int		src;	/* Process pid */
	int		dst;	/* Process pid */
	int		type;	/* Message type */
	int		body;	/* Could be a pointer or a integer */
} message;

message none_msg;
PUBLIC void ipc_async_send(message* m);
message* ipc_async_receive(int pid);
