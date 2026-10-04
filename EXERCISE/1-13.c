#include <stdio.h>

int main()
{

#define MAX_WORLD_LEN 15
#define IN 1
#define OUT 0

    int c, state, length;
    int wLengths[MAX_WORLD_LEN + 1];

    for (int i = 0; i <= MAX_WORLD_LEN; i++)
    {
        wLengths[i] = 0;
    }

    state = OUT;
    length = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (state == IN)
            {
                if (length > MAX_WORLD_LEN)
                {
                    length = MAX_WORLD_LEN;
                }
                wLengths[length]++;
                length = 0;
            }
        }

        else
        {
            state = IN;
            length++;
        }
    }

    printf("\n ===== HISTOGRAM ===== \n");
    for (int i = 1; i <= MAX_WORLD_LEN; i++)
    {
        printf("%2d: ", i);

        for (int j = 0; j < wLengths[i]; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}