/* A filter program to convert all text to uppercase */

#include <stdio.h>
#include <ctype.h>

int 
main (void)
{
  char ch;

  while ((ch = fgetc (stdin)) != EOF)
    {
      ch = toupper (ch);
      fputc (ch, stdout);
    }

  return 0;
}
