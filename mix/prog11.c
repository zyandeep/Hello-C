 /* Program no : 11
 * 
 * A cashier has currency notes of denominations 10, 50 and
 * 100. If the amount to be withdrawn is input through the
 * keyboard in hundreds, find the total number of currency notes
 * of each denomination the cashier will have to give to the
 * withdrawer.
 */

 #include <stdio.h>

 int main()
 {
 	int amount = 0;
 	int hun100 = 0, fif50 = 0, ten10 = 0;

 	puts("Enter the amount -->");
 	scanf("%d", &amount);

 	// 100
 	hun100 = amount / 100;
 	amount %= 100;

 	// 50
 	fif50 = amount / 50;
 	amount %= 50;

 	// 10
 	ten10 = amount / 10;
 	amount %= 10;

 	printf("Total 100's notes = %d\n", hun100);
 	printf("Total 50's notes = %d\n", fif50);
 	printf("Total 10's notes = %d\n", ten10);

 	if (amount)
 	{
		printf("Total coins = %d\n", amount); 		
 	}

 	return 0;
 }