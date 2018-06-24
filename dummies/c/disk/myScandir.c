/* Directory listing with recursion */

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>

static int files = 0;

void list_dir (const char *path);

int 
main (int argc, char const *argv[])
{
  if (argc == 1)
    {
      list_dir ("./");
    }
  else
    {
      list_dir (argv[1]);
    }

  printf ("\n\nTotal files in %s is: %d\n", ((argc == 1) ? "./" : argv[1]), files);
  return 0;
}


void 
list_dir (const char *path)
{
  DIR *pdir;
  struct dirent *entry;
  struct stat fbuf;
  char cur_dir[256];
  int total_files = 0;

  /* change to /path */
  if (chdir (path))
    {
      printf ("chdir(): ");
      printf ("%s --> %s\n", strerror (errno), path);

      exit (EXIT_FAILURE);
    }

  /* get the full path name */
  getcwd (cur_dir, 256);

  /* opening a directory to memory */
  pdir = opendir (cur_dir);

  if (pdir == NULL)
    {
      printf ("opendir(): ");
      printf ("%s --> %p\n", strerror (errno), pdir);

      exit (EXIT_FAILURE);
    }

  printf ("Entering to %s\n", cur_dir);

  /* read directory entries */
  while ((entry = readdir (pdir)))
    {
      /* filter . and .. */

      if (strcmp (entry->d_name, ".") && strcmp (entry->d_name, ".."))
	{

	  if (stat (entry->d_name, &fbuf))
	    {
	      printf ("stat(): ");
	      printf ("%s --> %s\n", strerror (errno), entry->d_name);
	    }

	  if (S_ISDIR (fbuf.st_mode))	/* check for directory */
	    {
	      list_dir (entry->d_name);
	      chdir (cur_dir);	/* change to parent */
	    }
	  else
	    {
	      total_files++;
	      printf ("%-20s size: %ld bytes\n", entry->d_name, fbuf.st_size);
	    }
	}
    }

  printf ("Total files read in %s: %d\n", cur_dir, total_files);
  files += total_files;

  closedir (pdir);
  printf ("directory %p is closed\n", pdir);
}
