/**
 * type.h
 */
 
#ifndef	_TYPE_H_
#define	_TYPE_H_


typedef	unsigned int		u32;
typedef	unsigned short		u16;
typedef	unsigned char		u8;


typedef	void	(*int_handler)	();
typedef	void	(*task_f)	();
typedef	void	(*irq_handler)	(int irq);

typedef void*	system_call;


#endif /* _TYPE_H_ */
