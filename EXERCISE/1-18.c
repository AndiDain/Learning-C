#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int maxline);

int main()
{
    int len;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0)
    {
        int i = len - 1;

        if(line[i] == '\n'){
            i--;
        }

        while (i >= 0 && line[i] == ' ' || line[i] == '\t')
        {
            i--;
        }

        if (i < 0)
        {
            continue;
        }

        for(int j = 0; j <= i; j++){
            putchar(line[j]);
        }
        putchar('\n');        
    }
    

    return 0;
}

int getline(char line[], int maxline){
    int c, i;
    for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    {
        line[i] = c;
    }
    
    if (c == '\n')
    {
        line[i] = c;
        i++;
    }

    line[i] = '\0';
    return i;
}