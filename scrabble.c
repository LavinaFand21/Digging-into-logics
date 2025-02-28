#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int calculation(string word);

int main(void)
{
    // Prompt the user for two words
    string one = get_string("Player 1: ");
    string two = get_string("Player 2: ");

    // Compute the score of each word
    int score1 = calculation(one);
    int score2 = calculation(two);
    printf("%i\n", score1);
    printf("%i\n", score2);

    // Print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int calculation(string word)
{
    int s = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        // Lowercase
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            s += points[(word[i] - 'a')];
        }
        // Uppercase
        else if (word[i] >= 'A' && word[i] <= 'Z')
        {
            s += points[(word[i] - 'A')];
        }
    }
    return s;
}
