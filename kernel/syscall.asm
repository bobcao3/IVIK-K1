; /**
;  * syscall.asm
;  */

%include "sconst.inc"

_NR_get_ticks       equ 0 ; 要跟 global.c 中 sys_call_table 的定义相对应！
_NR_ipc_send		equ	1
INT_VECTOR_SYS_CALL equ 0x36

; 导出符号
global	get_ticks ; 0
global	ipc_send  ; 1

bits 32
[section .text]

; ====================================================================
;                              get_ticks(void)
; ====================================================================
get_ticks:
	mov	eax, _NR_get_ticks
	int	INT_VECTOR_SYS_CALL
	ret

; ====================================================================
;                              ipc_send
; ====================================================================
; ipc_send(message* m)
ipc_send:
	mov	eax, _NR_ipc_send
	mov	ebx, [esp + 4]
	int	INT_VECTOR_SYS_CALL
	ret
	
; ====================================================================
;
;
