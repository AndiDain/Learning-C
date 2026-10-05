#include <stdio.h>

int rotate(int x, int n);
void printBinary(int b);

int main()
{
    int x, n;

    x = 0b01111010;
    n = 2;

    int result = rotate(x, n);
    printBinary(result);

    return 0;
}

int rotate(int x, int n)
{
    int mask, rotated, totalBits;
    totalBits = 8 - n;

    mask = (1 << n) - 1;
    rotated = (x & mask) << totalBits;

    x = x >> n;
    rotated = rotated | x;
    
    return rotated;
    
}

void printBinary(int b){
    for(int i = 7; i >= 0; i--){
        if(b & (1 << i)) {
            printf("1");
        } else {
            printf("0");
        }
    }
}
