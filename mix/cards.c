/*
 * Program to evaluate face values.
 * Author: Zyandeep
 * Date:   10-08-2015
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(void)
 {
 	char card_name[3] = " ";
 	int value = 0;
 	int count = 0;

 	while (card_name[0] != 'X')
 	{
 		puts("Enter the cards name -->");
 		scanf("%2s", card_name);

 		switch (card_name[0]) 
 		{
 			case 'K':
 			case 'Q':
 			case 'J':
 				value = 10;
 				break;

 			case 'A':
 				value = 11;
 				break;

 			case'X':
 				continue;

 			default :
 				value = atoi(card_name);
 		}

 		if (!(value >= 1 && value <= 10))
 		{
 			puts("I don't understand that value. Try again");
 			continue;
 		}
 		

 		/*if (card_name[0] == 'K')
 		{
 			value = 10;
 		}
 		else if (card_name[0] == 'Q')
 		{
 			value = 10;
 		}
 		else if (card_name[0] == 'J')
 		{
 			value = 10;
 		}
 		else if (card_name[0] == 'A')
 		{
 			value = 11;
 		}
 		else 
 		{
 			value = atoi(card_name);
 		}*/
 		

 		if (value >= 3 && value <= 6)
 		{
 			puts("Count has gone up");
 			count++;
 		}
 		else if (value == 10) 
 		{
 			puts("Count has gone down");
 			count--;
 		}

 		printf("Current count: %i\n", count);
 	
 	}
 	
 	return 0;

 }
