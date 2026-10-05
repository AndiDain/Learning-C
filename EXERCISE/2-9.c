#include <stdio.h>

int bitCount(int x);

int main()
{
    int x;

    x = 0b00110111;

    printf("%d\n", bitCount(x));    
    return 0;
}

int bitCount(int x)
{
    int count = 0;
    while (x)
    {
        x &= (x - 1);
        count++;
    }
    
    return count;
}