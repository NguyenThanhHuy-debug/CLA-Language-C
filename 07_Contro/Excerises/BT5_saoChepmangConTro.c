#include <stdio.h>

void coppyArray(int *src, int *dest, int n)
{
    for(int i = 0; i < n; i++)
    {
        *(dest + i) = *(src + i);
    }    
}

void reverseArrayPointer(int *arr, int n)
{
    int *left = arr;
    int *right = arr + n - 1;
    
    while(left < right)
    {
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }

}

void coppyArrayPointer(int *src, int *dest, int n)
{
    int *end = src + n;
    while(src < end)
    {
        *dest = *src;
        src++;
        end--;
    }
}


int main(void)
{
    int n;
    scanf("%d", &n);
    int src[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &src[i]);
    }
    int dest[n];
    
    coppyArray(src,dest, n);
    reverseArrayPointer(dest, n);


    for(int i = 0; i < n; i++)
    {
        printf("%d ", dest[i]);
    }
    return 0;
}