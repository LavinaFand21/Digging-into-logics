#include <cs50.h>
#include <stdio.h>
int main(void)
{
    // Enter height of mario
    int n = get_int("Height:");
    int a = 4;
    // Range should be 1-8
    while (n < 1 || n > 8)
    {
        n = get_int("Height:");
    }
    // Mario looping!
    for (int i = 1; i <= n; i++)
    {
        for (int k = i; k < n; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= a; j++)
        {
            if (j < (a / 2))
            {
                printf("#");
            }
            else if (j > (a / 2 + 1))
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        a += 2;
        printf("\n");
    }
}# Digging-into-logics
