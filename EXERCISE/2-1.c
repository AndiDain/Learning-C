#include <limits.h>
#include <stdio.h>

int main(void)
{
    // printf("char: %d to %d\n", CHAR_MIN, CHAR_MAX);
    // printf("short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    // printf("int: %d to %d\n", INT_MIN, INT_MAX);
    // printf("long: %d to %d\n", LONG_MIN, LONG_MAX);

    // printf("unsigned short: 0 to %u\n", USHRT_MAX);
    // printf("unsigned int: 0 to %u\n", UINT_MAX);
    // printf("unsigned long: 0 to %u\n", ULONG_MAX);

    int max = (unsigned int)(~0) >> 1;
    int min = -max - 1;
    
    short smax = (unsigned short)(~0) >> 1;
    short smin = -smax - 1;

    long lmax = (unsigned long)(~0) >> 1;
    long lmin = -lmax - 1;

    printf("int min: %d\n", min);
    printf("int max: %d\n", max);

    printf("short smin: %d\n", smin);
    printf("short smax: %d\n", smax);

    printf("long lmin: %d\n", lmin);
    printf("long lmax: %d\n", lmax);

    return 0;
}