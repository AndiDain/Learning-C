#include <stdio.h>

int htoi(char s[]);

int main()
{
    char hex[] = "0xB8150B2C";
    printf("Decimal Value is %u", htoi(hex));
    return 0;
}

int htoi(char s[]){
    int i = 0, n = 0, hexDigit = 0;

    if (s[i] == '0')
        i++;

    if(s[i] == 'x' || s[i] == 'X')
        i++;

    for (i; s[i] != '\0'; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            hexDigit = s[i] - '0';
            n = 16 * n + hexDigit;
        }

        if (s[i] >= 'A' && s[i] <= 'F')
        {
            hexDigit = s[i] - 'A' + 10;
            n = 16 * n + hexDigit;
        }

        if (s[i] >= 'a' && s[i] <= 'f')
        {
            hexDigit = s[i] - 'a' + 10;
            n = 16 * n + hexDigit;
        }
    }

    return n;
}