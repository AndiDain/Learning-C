#include <stdio.h>

int main()
{
#define NUM_CHARS 128

    int c;
    int charCounts[NUM_CHARS];

    for (int i = 0; i < NUM_CHARS; i++)
    {
        charCounts[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c >= 0 && c < NUM_CHARS)
        {
            charCounts[c]++;
        }
    }

    printf("\n----- Character Frequency Histogram -----\n");

    for (int i = 0; i < NUM_CHARS; i++)
    {
        if (charCounts[i] > 0)
        {
            if (i == '\n')
            {
                printf("\\n: ");
            }
            else if (i == '\t')
            {
                printf("\\t: ");
            }
            else if (i == ' ')
            {
                printf("' ': ");
            }
            else{
                printf("%c: ", i);
            }

            for (int j = 0; j < charCounts[i]; j++)
            {
                putchar('*');
            }
            putchar('\n');
        }
    }

    return 0;
}