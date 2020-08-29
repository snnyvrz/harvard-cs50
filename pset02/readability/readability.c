#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int calculate_index(int letters, int words, int sentences);

int main(void)
{
    string text = get_string("Text: ");
    int letters = 0, words = 1, sentences = 0;
    int length = strlen(text);
    for (int i = 0; i < length; i++)
    {
        if isalnum(text[i])
        {
            letters++;
        }
        else if isspace(text[i])
        {
            words++;
        }
        else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }
    int index = calculate_index(letters, words, sentences);
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

int calculate_index(int letters, int words, int sentences)
{
    float l = letters * 100 / words; // The average of letters per 100 words
    float s = sentences * 100 / words; // The average of sentences per 100 words
    float index = 0.0588 * l - 0.296 * s - 15.8; // Coleman-Liau index formula
    return round(index);
}


