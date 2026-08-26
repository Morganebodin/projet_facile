
#ifndef MAIN_H
#define MAIN_H

#define	STDROUNDS	3		/* Standard number of rounds */

/* Prototypes */
extern void	play			(void);
extern int	valid			(int);
extern void	match			(void);
extern int	get_result		(void);
extern void	print_wepon		(char*, int);
extern void*	random_engine		(void*);

#endif
