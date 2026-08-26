
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>


#include "args.h"
#include "errors.h"
#include "main.h"
#include "stat.h"

#define	HELP	"--help"
#define VERSION	"--version"
#define STAT	"--stat"

char* program_name =0;
char* program_version = 0;
/*
 * process_args: Determind user arguments and call appropiate function.
 * Returns number of rounds of gameplay.
 */
int
process_args (int argc, char **argv)
{
	program_name = argv[0];			// Set program name
	program_version = "0.1.1 (beta)";	// Set program version

	if (argc == 1)		// If no parameters standard number of rounds.
	{
		return STDROUNDS;				
	}
	else if (argc == 2)
	{
		/* --help */
		if (strcmp (argv[1], HELP) == 0)
		{
			print_help ();
			exit (EXIT_SUCCESS);
		}
		/* --version */
		else if (strcmp (argv[1], VERSION) == 0)
		{
			print_version ();
			exit (EXIT_SUCCESS);
		}
		/*  --stat */
		else if (strcmp (argv[1], STAT) == 0)
		{
			print_overall_stats ();
			exit (EXIT_SUCCESS);
		}
		/* user has entered number of rounds. */
		else
		{
			int i;
			i = atoi (argv[1]);
			
			/* if number of rounds is not valid. */
			if (i < 1)
			{
				print_arg_error ();
				exit (EXIT_FAILURE);
			}
			/* if valid number of rounds */
			else
			{
				return i;
			}
		}
	}
	/* Incorrect number of parameters */
	else
	{
		print_arg_error ();
		exit (EXIT_FAILURE);
	}
}
