// Structute inisialization

#include <stdio.h>

int main(void)
{
	struct month
	{
		char *name;
		int age;
		char *likes;
		char *dislikes;
		float iq;
	};
	
	/* structure inisiatisation */

	struct month march = {
		"Kally",
		23,
		"Books, scented candles, macram`e, handguns",
		"Bureaucrats, locked doors, guys named Milton",
		139.8
	};


	puts("Mensa Playmate of the Month Data");
	
	printf("%9s : %s\n", "Name", march.name);
	printf("%9s : %d\n", "Age", march.age);
	printf("%9s : %s\n", "Likes", march.likes);
	printf("%9s : %s\n", "Dislikes", march.dislikes);
	printf("%9s : %.2f\n", "IQ", march.iq);

	return 0;
}