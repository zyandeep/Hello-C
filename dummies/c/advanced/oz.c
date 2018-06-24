/* dynamic memory allocation and structure */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void check_memory(void *ptr);
void clean(void);
void flush_stdin();

typedef struct 
{
	char *actor;
	int age;
	char *role; 
}oz;

oz *ptr = NULL;
int rc = -1;

int main(void)
{
	char input[70];
	short int ans;
	int a;

	atexit(clean);

	/* Display the menu */
	for(;;)
	{
		puts("\n1. Add a record to OZ database");
		puts("2. Display the OZ database");
		puts("3. Delete the last record from OZ database");
		puts("4. Quit");
		printf("Enter your choice: ");
		scanf("%hd", &ans);

		if (ans == 4)
		{
			exit(EXIT_SUCCESS);
		}
		else if (ans == 1)
		{
			ptr = (oz *) realloc(ptr, sizeof (oz) * (rc + 2));
			check_memory(ptr);
			rc++;

			printf("Enter the name of actor: ");
			flush_stdin();
			fgets(input, sizeof(input), stdin);
			(ptr + rc)->actor = (char *) malloc(strlen(input) + 1);
			check_memory( (ptr + rc)->actor );
			strcpy( (ptr + rc)->actor, input);
			*( (ptr + rc)->actor + (strchr((ptr + rc)->actor, '\n') - (ptr + rc)->actor) ) = '\0';

			printf("Enter the age of actor: ");
			scanf("%i", &(ptr + rc)->age);

			printf("Enter the role of actor: ");
			flush_stdin();
			fgets(input, sizeof(input), stdin);
			(ptr + rc)->role = (char *) malloc(strlen(input) + 1);
			check_memory( (ptr + rc)->role );
			strcpy( (ptr + rc)->role, input);
			*( (ptr + rc)->role + (strchr((ptr + rc)->role, '\n') - (ptr + rc)->role) ) = '\0';

		}
		else if (ans == 2)
		{
			printf("%-20s\t%5s\t%20s\n", "Name", "Age", "Role");
			puts("-------------------------------------------------------------");

			for (a = 0; a <= rc; a++)
			{
				printf("%-20s\t%5i\t%20s\n", (ptr+a)->actor, (ptr+a)->age, (ptr+a)->role);
			}
		}
		else if (ans == 3)
		{

		}
	}

	return 0;
}

void check_memory(void *ptr)
{
	if (ptr == NULL)
	{
		puts("Not enough memory!");
		exit(EXIT_FAILURE);
	}
}

void clean(void)
{
	puts("All memory has been realesed");
	puts("Quitting now...");

	free(ptr);
}

void flush_stdin()
{
	while (fgetc(stdin) != '\n');
		;
}