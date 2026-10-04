#include <stdio.h>

// created a macro for max line in words
#define MAX_LINE 1000

// function prototypes
int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{

    // data for word lenght
    int len;
    // data for max amount of word
    int max;
    // array for holding 1000 characters
    char line[MAX_LINE];
    char longest[MAX_LINE];

    // set max default to 0
    max = 0;
    // call getline function to read text into line array
    while ((len = getline(line, MAX_LINE)) > 0)
    {
        // if word length higher than current max
        if (len > max)
        {
            // update record lenght
            max = len;
            // calls copy function to duplicate the content of line into longest array replacing whataver is before
            copy(longest, line);
        }
    }

    // check if we read any line at all 
    if (max > 0)
    {
        // if we did print the text from the longest
        printf("%s", longest);
    }

    return 0;
}

// defines the function takes an array s[] and int lim (which is 1000)
int getline(char s[], int lim)
{
    // c will hold each character i is an index counter
    int c, i;

    // check if there's leftover space in array for null terminator, check if the text is EOF (End OF File), check if user has click enter on keyboard or not
    for (i = 0; lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
    {
        // store character at position i
        s[i] = c;
    }

    // if for loop stop because we click enter store that enter into array then increment by i 
    if (c == '\n')
    {
        s[i] = c;
        i++;
    }
    
    // important add the null terminator at the end
    s[i] = '\0';

    return i;
}

// define a function that return nothing
void copy(char to[], char from[])
{
    int i;

    i = 0;
    // it takes characte at from[i] copies it into to[i] and then check if that character is null terminator or not
    while (to[i] = from[i] != '\0')
    {
        i++;
    }
}
