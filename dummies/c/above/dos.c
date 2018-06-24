#include <stdio.h>
#include <string.h>


int main(void)
{
	char prompt[] = "You think I know how to ";
	char ans[30];
	char new[100];

	do 
	{
		printf("C:\\> ");
		scanf("%s", ans);
		strcpy(new, prompt);
		strcat(new, ans);
		strcat(new, " ?");
		puts(new);

		if (strcasecmp(ans, "quit"))
		{
			puts("Nope...");
		}
		else
		{
			printf("%s\n", "Well, may be I do...");
			break;
		}

	} while (1);

	return 0;
}