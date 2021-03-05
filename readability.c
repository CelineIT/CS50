#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>


// declare a function to count the number of letters return_type name(argument-list);

int main(void)
{

//prompt user to enter text
string s = get_string("Text: ");

    int letters = 0; // count number of letters
    int words = 1;  // count number of words
    int sentences = 0; // count number of sentences
    
    for (int i = 0; i < strlen(s); i++)
{
    if (isalpha(s[i]))
    {
        letters++;
    }
    
    if (isspace(s[i]))
    {
        words++;
    }
    
    if (s[i] == '.'  || s[i] == '?'  || s[i] == '?')
    {
        sentences++;
    }
}

// printf("%i letters\n", letters);
// printf("%i words\n", words);
// printf("%i sentences\n", sentences);


{
// apply the Coleman-Liau index to get a grade
float grade = 0.0588 * (100 * (float)letters / (float)words) - 0.296 * (100 * (float)sentences / (float)words) - 15.8;

//L is the average number of letters per 100 words in the text
float L = (letters * 100) / words;

// S is the average number of sentences per 100 words in the text
float S = (sentences * 100) / words;



// if index => 16 then grade = Grade 16+
if (grade >= 16)
    {
    printf("Grade 16+\n");
    }

// if index < 1 then grade = Before Grade 1
else if (grade < 1)
    {
    printf("Before Grade 1\n");
    }
// if index is in between, then print the grade number
else 
    {
    printf("Grade %.f\n", grade);
    }

}
}