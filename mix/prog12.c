 /* Program no : 12
 * 
 * If the total selling price of 15 items and the total profit earned
 * on them is input through the keyboard, write a program to
 * find the cost price of one item..
 */

 #include <stdio.h>

 int main()
 {
 	float total_sell_p, total_profit;
 	float total_cost = 0;

 	puts("Enter the total selling price and total profit -->");
 	scanf("%f %f", &total_sell_p, &total_profit);

 	total_cost = total_sell_p - total_profit;

 	printf("Cost price of 15 items = %.2f\n", total_cost);
 	printf("Cost price of 1 item = %.2f\n", total_cost / 15);

 	return 0;
 }