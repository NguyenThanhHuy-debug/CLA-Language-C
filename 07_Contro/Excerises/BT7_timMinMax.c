#include <stdio.h>

int soLonNhat(int *a, int *b)
{
    if(*a == *b) return *a;
    else if(*a > *b) return *a;
    else return *b;
}

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);

    printf("%d", soLonNhat(&a, &b));

    return 0;
}