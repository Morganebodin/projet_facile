
#ifndef STAT_H
#define STAT_H

#define	STATFILE	".papercut"	/* stat file name */

/* stats data structure */
struct stats {
	int l;		// Number of loses
	int w;		// Number of wins
	int d;		// Number of draws
};

/* Prototypes */
extern void			process_stats		(struct stats);
extern void			print_overall_stats	(void);
extern void			print_stat		(struct stats, char*);
extern char*			get_statfile_path	(void);
extern struct stats		get_stat		(char*);
extern int			stat_file_exists	(char*);
extern struct stats		update_stat		(struct stats, struct stats);
extern void			update_statfile		(struct stats, char*);
extern FILE*			file_open		(char*, char*);
extern void			file_close		(FILE*);

#endif
