/*
	Quick sort using standard C library
	date: 06-09-2015
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct 
{
	int length;
	int width;
} rectangle;


int compare_scores(const void *a, const void *b);
int compare_names(const void *a, const void *b);
int rect_area(const void *a, const void *b);


int main(void)
{
	int i;
	int scores[] = {543, 323, 32, 554, 11, 3, 112};
	char *names[] = {"Karen", "Mark", "Betty", "Marry", "Allison"};

	rectangle r[] = {
		{.length = 3, .width = 2}, {.length = 10, .width = 15}, {3, 10}, {22, 40}, {5, 7}
	};

	puts("BEFORE USING qsort()...");
	for (i = 0; i < 7; i++)
	{
		printf("%d ", scores[i]);
	}

	qsort(scores, 7, sizeof(int), compare_scores);

	puts("\n AFTER USING qsort()...");
	for (i = 0; i < 7; i++)
	{
		printf("%d ", scores[i]);
	}

	puts("\n ....................................");
	

	puts(" BEFORE USING qsort()...");
	for (i = 0; i < 5; i++)
	{
		printf("%s ", names[i]);
	}

	qsort(names, 5, sizeof(char *), &compare_names);

	puts("\n AFTER USING qsort()...");
	for (i = 0; i < 5; i++)
	{
		printf("%s ", names[i]);
	}

	puts("\n ....................................");

	puts(" qsort() to sort struct rectangles ...");
	qsort(r, 5, sizeof(rectangle), rect_area);
	for (i = 0; i < 5; i++)
	{
		printf("%d \n", r[i].length * r[i].width);
	}

	
	return 0;
}


// comparator functions
int compare_scores(const void *a, const void *b)
{
	int aa = *(int *)a;
	int bb = *(int *)b;
	
	return aa - bb;	

	// return bb - aa;	
}


int compare_names(const void *a, const void *b)
{
	char *s1 = *(char **)a;
	char *s2 = *(char **)b;

	return strcmp(s1, s2);

	// return -strcmp(s1, s2);
}



int rect_area(const void *a, const void *b)
{
	rectangle *r1 = (rectangle *) a;
	rectangle *r2 = (rectangle *) b;
	int area_r1 = r1->length * r1->width;
	int area_r2 = r2->length * r2->width;

	return area_r1 - area_r2;
}