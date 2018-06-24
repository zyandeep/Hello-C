#include <stdio.h>

int main(void)
{
    int n;
    int i, j, k, l, b;

    printf("Enter the number of lines: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("\n");

        /* To print the blank spaces */
        for (b = n; b >= i ; b--)
        {
            printf("  ");
        }

        for (j = i, k = 1; k <= i; j++, k++)
        {
            printf("%d ", j);
        }

        for (l = j - 2; l >= i; l--)
        {
            printf("%d ", l);
        }
    }

    return 0;
}