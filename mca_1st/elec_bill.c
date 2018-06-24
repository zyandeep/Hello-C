// WAP to print a electricity bill of a given format

#include <stdio.h>

int main(void)
{
  char consumer_no[8];
  float prev_reading, cur_reading, unit = 0.0f;
  float rs_per_unit, bill = 0.0f;

  printf("\nEnter consumer no: ");
  scanf("%s", consumer_no);
  printf("\nEnter previous meter reading: ");
  scanf("%f", &prev_reading);
  printf("\nEnter current meter reading: ");
  scanf("%f", &cur_reading);
  printf("\nEnter per unit price : ");
  scanf("%f", &rs_per_unit);

  unit = cur_reading - prev_reading;
  bill = unit * rs_per_unit;

  printf("\n\n\n\t\t\t ELECTRICITY BILL\n");
  printf("\n\t\t\tConsumer No: %s\n", consumer_no);
  printf("\n\t\t\tUnit consumed: %.2f\n", unit);
  printf("\n\t\t\tTotal bill: %.2f\n", bill);

  return 0;
}
