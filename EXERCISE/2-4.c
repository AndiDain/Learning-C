#include <stdio.h>

void squeeze(char s[], char t[]);

int main()
{
    char s[] = "Hello World";
    char t[] = "or";

    squeeze(s, t);

    printf("%s\n", s);

    return 0;
}

void squeeze(char s[], char t[]){
    int i, j, k, found;
    
    for (i = j = 0; s[i] != '\0'; i++)
    {
        found = 0;
        for (k = 0; t[k] != '\0'; k++){
            if (s[i] == t[k]){
                found = 1;
                break;
            }
        }
        if (found == 0)
        {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
    
}