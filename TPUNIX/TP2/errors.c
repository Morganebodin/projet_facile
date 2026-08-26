
#include "errors.h"
#include "main.h"
#include "args.h"

/*
 * print_help: Prints program help.
 */
void
print_help (void)
{
	print_usage (stdout);

	fprintf (stdout, "A command line based Rock, Paper, Scissors game.\n");
	fprintf (stdout, "  --stat\tprint user statictics.\n");
	fprintf (stdout, "  --help\tprint help\n");
	fprintf (stdout, "  --version\tprint version\n");
}

/*
 * print_version: Prints program version.
 */
void
print_version (void)
{
	fprintf (stdout, "%s %s \n", program_name, program_version);
	fprintf (stdout, "This is free software. You may redistribute copies ");
	fprintf (stdout, "of it the terms of\n");
	fprintf (stdout, "the GNU General Public License ");
	fprintf (stdout, "<http://www.gnu.org/licenses/gpl.html>.\n");
	fprintf (stdout, "There is NO WARRANTY, to the extent permitted by ");
	fprintf (stdout, "law.\n");
}

/*
 * print_arg_error: Prints arguments error message.
 */
void
print_arg_error	(void)
{
	fprintf (stderr, "%s: invalid arguments\n", program_name);
	
	print_usage (stderr);
}


/*
 * print_usage: Prints program usage.
 */
void
print_usage (FILE *iostream)
{
	fprintf (iostream, "usage: %s [number of rounds]\n", program_name);
	fprintf (iostream, " (If no number of rounds given, game will have ");
	fprintf (iostream, "%d rounds.)\n", STDROUNDS);
}

/*
 * print_error: Prints program error messages.
 */
void
print_error (char *error)
{
	fprintf (stderr, "%s: %s\n", program_name, error);
}
