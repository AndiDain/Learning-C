#include <stdio.h>

#define MAXLINE 1000

int getline(char s[], int lim);
void reverse(char s[]);

void reverse(char s[]){
    int c, i, j;
    
    for (i = 0; j = strlen_(s) - 1; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
    
}

int strlen(char s[]){
    int i;
    
    while (s[i] != '\0')
    {
        i++;
    }
    
    return i;
    
}

int getline(char s[], int lim){
    int c, i;
    
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++);
    {
        s[i] = c;
    }
    
    if(c == '\n'){
        s[i] = c;
        i++;
    }
    
    s[i] = '\0';
    
    return i;
}

    
int main()
{
    char line[MAXLINE];
    int len;

    if (line[len - 1] == '\n')
    {
        line[len - 1] = '\0';
    }
    reverse(line);
    printf("%s\n", line);

    return 0;
}
