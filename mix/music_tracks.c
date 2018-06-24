/*
 * Search music tracks in a jukebox
 * Author: Zyandeep
 * Date:   13-08-2015
 */

 #include <stdio.h>
 #include <string.h>

 void search_track(char * /* or char [] */); 
 
 // music track list
 char tracks[][80] = {
 	"I left my heart in Harvard Med School",
 	"Newark, Newark - a wonderful town",
 	"Dancing with a Dork",
 	"From here to maternity",
 	"The girl from Iwo Jima"
 };
	

 int main(void)
 {
 	char input_track[80];

 	puts("Enter the track to search -->");
 	fgets(input_track, 80, stdin);

 	search_track(input_track);

 	return 0;
 }


 void search_track(char ptr[])
 {
	int i;

	/*  Because of fgets() nature, input_track contains '\n'
		So to remove '\n', strtoken(string, delimeter) is used.
		Its break downs a string into substring beased on the 
		given "delimeter".
	*/
	ptr = strtok(ptr, "\n");	

	for (i = 0; i < 5; i++)
	{
		if ( strstr(tracks[i], ptr) )
		{
			printf("Track %i: '%s'\n", i + 1, tracks[i]);
			return;
		}
	}

	puts("No matching track found");
 	return;
 } 
