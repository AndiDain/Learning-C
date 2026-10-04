#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len;
    int max;
    int line[MAXLINE];
    int longest[MAXLINE];

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0)
    {
        // check if last character is enter key or not
        if (line[len - 1] != '\n')
        {
            int c;

            // read the nect leftover character, check if its end of file and enter key
            while ((c = getchar()) != EOF && c != '\n')
            {
                // increment i
                len++;
            }

            // check if user hit enter key at the end of the character
            if (c == '\n')
            {
                len++;
            }
        }

        // update/save new records
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
        
    }

    if (max > 0)
    {
        printf("Longest line was: %d\n", max);
        printf("Text (up to %d chars): %s\n", MAXLINE - 1, longest);
    }
    

    return 0;
}

int getline(char s[], int lim)
{
    int c, i;

    for (i = 0; lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    {
        s[i] = c;
    }

    if (c == '\n')
    {
        s[i] = c;
        i++;
    }

    s[i] = '\0';

    return i;
}

void copy(char to[], char from[])
{
    int i;

    i = 0;
    while (to[i] = from[i] != '\0')
    {
        i++;
    }
}
