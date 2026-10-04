#include <stdio.h>

int invert(int x, int p, int n);
void printBinary(int b);

int main()
{
    int x, p, n, result;

    x = 0b00111011;
    p = 7;
    n = 3;

    result = invert(x, p, n);
    printBinary(result);

    return 0;
}

int invert(int x, int p, int n){
    int num, mask;

    num = (1 << n) - 1;
    mask = num << (p - n + 1);
    x ^= mask;

    return x;
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
