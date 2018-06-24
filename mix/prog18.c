/*
 * If the ages of Ram, Shyam and Ajay are input through the
 * keyboard, write a program to determine the youngest of the
 * three.
 */


 #include <stdio.h>

 int main()
 {
 	int age_ram, age_shyam, age_ajay;
 	char *youngest = " ";
 	
 	puts("Enter the ages of Ram, Shyam and Ajay -->");
 	scanf("%d %d %d", &age_ram, &age_shyam, &age_ajay);

 	if ((age_ram == age_shyam) && (age_ram == age_ajay))
 	{
 		puts("All of the three are equal");
 	}
 	else 
 	{
 		if (age_ram < age_shyam)
 		{
 			if (age_ram < age_ajay)
 			{
 				youngest = "youngest is ram";
 			}
 			else if (age_ram == age_ajay) 
 			{
 				youngest = "both ram and ajay are equal and younger than shyam";
 			}
 			else
 			{
 				youngest = "youngest is ajay";
 			}
 		}
 		else if (age_ram == age_shyam)
 		{
 			if (age_ram < age_ajay)
 			{
 				youngest = "both ram and shyam are equal and younger than ajay";
 			}
 			else
 			{
 				youngest = "youngest is ajay";
 			}
 		}
 		else 
 		{
 			if (age_shyam < age_ajay)
 			{
 				youngest = "youngest is shyam";
 			}
 			else if (age_shyam == age_ajay) 
 			{
 				youngest = "both shyam and ajay are equal and younger than ram";
 			}
 			else
 			{
 				youngest = "youngest is ajay";
 			}
 		}

 		puts(youngest);
 	}


 	return 0;
 }