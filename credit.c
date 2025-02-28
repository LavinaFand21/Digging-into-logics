#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
    // Input
    string num = get_string("Number: ");

    // Length of the number = printf("%lu\n",strlen(num));
    int l = strlen(num);

    int a = 0, y = 0, x = 0;

    // Number validity
    for (int i = (l - 1); i >= 0; i--)
    {
        if (a % 2 == 0)
        {
            x = x + (num[i] - '0');
        }
        if (a % 2 != 0)
        {
            y = y + ((num[i] - '0') * 2);
            if (((num[i] - '0') * 2) > 9)
            {
                y -= 9;
            }
        }
        a++;
    }
    a = x + y;

    //  Check which card it is

    // AMERICAN EXPRESS
    if ((a % 10 == 0) && num[0] == '3' && (num[1] == '4' || num[1] == '7') && (l == 15))
    {
        printf("AMEX\n");
    }

    // MASTERCARD
    else if ((a % 10 == 0) && num[0] == '5' &&
             (num[1] == '1' || num[1] == '2' || num[1] == '3' || num[1] == '4' || num[1] == '5') &&
             (l == 16))
    {
        printf("MASTERCARD\n");
    }

    // VISA
    else if ((a % 10 == 0) && (num[0] == '4') && ((l == 13) || (l == 16)))
    {
        printf("VISA\n");
    }

    else
    {
        printf("INVALID\n");
    }
}
