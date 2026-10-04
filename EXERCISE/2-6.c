#include <stdio.h>

int setbits(int x, int p, int n, int y);
void printBinary(int b);

int main()
{
    int result, x, y, p, n;
    x = 0b11010110;
    y = 0b10101101;

    p = 7;
    n = 3;

    result = setbits(x, p, n, y);
    printBinary(result);

    return 0;
}

int setbits(int x, int p, int n, int y){
    int num, position, xMask, xResult, yResult, finalResult;

    num = (1 << n) - 1;
    position = num << (p - n + 1);
    xMask = ~position;
    xResult = x & xMask;

    yResult = y & num;
    yResult = yResult << (p - n + 1);

    finalResult = xResult | yResult;

    return finalResult;
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
