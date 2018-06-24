// string formatting with printf

#include <stdio.h>

int main(void)
{
	char actor1[] = "Tom Hanks";
	char actor2[] = "Hugh Grant";
	char player[] = "Sachin Tendulkar";
	char me[] = "Zyandeep Baruah";
	char bing[] = "Mathew Parry";

	printf("%20s\n", actor1);
	printf("%20s\n", actor2);
	printf("%20s\n", me);
	printf("%20s\n", player);
	printf("%20s\n", bing);
	
	return 0;
}