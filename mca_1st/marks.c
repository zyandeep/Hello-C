#include <stdio.h>

int main(void)
{
   float avg_mark;

   printf("Enter the average mark: ");
   scanf("%f", &avg_mark);

   if (avg_mark >= 80 && avg_mark <= 100)
      printf("You've got Honours\n");
   else if (avg_mark >= 60 && avg_mark <= 79)
      printf("You've got Frist division\n");
   else if (avg_mark >= 50 && avg_mark <= 59)
      printf("You've got Second division\n");
   else if (avg_mark >= 0 && avg_mark <= 49)
      printf("You're the last\n");
   else
      printf("Invalid input!\n");

   return 0;
}
