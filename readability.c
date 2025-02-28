#include <cs50.h>
#include <stdio.h>
#include <string.h>

int total_letters(string text);
int total_words(string text);
int total_sentences(string text);

int main(void)
{
    // User input text
    string text = get_string("Text: ");

    // Length of text as string
    int l = strlen(text);

    // Toatal number of letters, words and sentences
    int letters = total_letters(text);
    int words = total_words(text);
    int sentences = total_sentences(text);

    // Average number of letters per 100 words
    float L = ((float) letters / words) * 100;

    // Average number of sentences per 100 words
    float S = ((float) sentences / words) * 100;

    // Readability test of Coleman-Liau index
    int index = (int) (0.0588 * L - 0.296 * S - 15.8 + 0.5);

    // Grade readability
    if (index <= 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index > 1 && index < 16)
    {
        printf("Grade %i\n", index);
    }
}

// Number of letters only alphabets = letters
int total_letters(string text)
{
    int letters = 0, l = strlen(text);
    for (int i = 0; i < l; i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            letters++;
        }
    }
    return letters;
}

// Number of words i.e. after space = words
// (initialised with 1 to count last '.' one)
int total_words(string text)
{
    int words = 1, l = strlen(text);
    for (int i = 0; i < l; i++)
    {
        if (text[i] == ' ')
        {
            words++;
        }
    }
    return words;
}

// Number of sentences i.e. after '.' and '!' and '?' = sentences
int total_sentences(string text)
{
    int sentences = 0, l = strlen(text);
    for (int i = 0; i < l; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }
    return sentences;
}
