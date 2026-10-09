#include <stdio.h>

void coppyArray(const int *src, int *dest, int n)
{
    for(int i = 0; i < n; i++)
    {
        *(dest + i) = *(src + i); 
    }
}

void coppyArrayPtr(const int *src, int *dest, int n)
{
    const int *end = src + n;
    while(src < end)
    {
        *dest = *src;

        src++;
        dest++
    }
}

int main(void)
{
    int src[5] = {10, 20, 30, 40, 50};
    int dest[5];

    coppyArray(src, dest, 5);
    dest[0] = 99;
    printf("src[0]=%d dest[0]=%d\n", src[0], dest[0]);  // 10 va 99

    return 0;
}