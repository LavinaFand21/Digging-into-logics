#include <cs50.h>
#include <stdio.h>
int main(void)
{
    // Enter amount
    int n = get_int("Change owed: ");
    // It should be greater than 0
    while (n < 1)
    {
        n = get_int("Change owed: ");
    }
    int a = 0;
    // Change looping! 
    while (n - 25 >= 0)
    {
        a++;
        n = n - 25;
    }
    while (n - 10 >= 0)
    {
        a++;
        n = n - 10;
    }
    while (n - 5 >= 0)
    {
        a++;
        n = n - 5;
    }
    while (n - 1 >= 0)
    {
        a++;
        n = n - 1;
    }
    printf("%i\n", a);
}
