#include <stdio.h>

int main(void)
{
      char str[50];
      int i;

      printf("Enter a string in all uppercase: ");
      scanf("%[^\n]", str);

      for (i = 0; str[i] != '\0'; i++)
      {
         if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
      }

      printf("Your string in all lowercase: %s", str);
      puts("");
      
      return 0;
}
