#include <stdio.h>

int any(char s1[], char s2[]);

int main()
{
    int result;
    char s1[] = "aeiueo";
    char s2[] = "rie";

    result = any(s1, s2);
    printf("%d\n", result);

    return 0;
}

int any(char s1[], char s2[]){
    int i, j;

    for (i = 0; s1[i] != '\0'; i++)
    {
        for (j = 0; s2[j] != '\0'; j++){
            if (s1[i] == s2[j])
            {
                return i;
            }
        }
    }
    return -1;
}