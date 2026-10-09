#include <stdio.h>

int main(void)
{
    // int a = 5, b = 10;
    // int temp;

    // temp = a;
    // a = b;
    // b = temp;

    // printf("Sau khi swap: a = %d, b = %d\n", a, b);
    
    int a = 5, b = -10;

    a = a + b; // a = 15
    b = a - b; // b = 15-10 = 5
    a = a - b; // a = 15 - 5 = 10
    printf("Sau khi swap: a = %d, b = %d\n", a, b);
    return 0;

    // float a = -5.2f, b = 10.9f;  // 0000 0101 , 0000 1010

    // a = a ^ b; // a = 0000 1111 = 15
    // b = a ^ b; // b = 0000 1111 ^ 0000 1010 = 0000 0101 = 5
    // a = a ^ b; // a = 0000 1111 ^ 0000 0101 = 0000 1010 = 10 
    // printf("Sau khi swap: a = %f, b = %f\n", a, b);
    return 0;
}