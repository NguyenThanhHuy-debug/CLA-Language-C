#include <stdio.h>

int main(void)
{
    int arr[] ={12, 45, 23, 67, 34, 89, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr;
    int max = *ptr, min = *ptr;

    for(int i = 0; i < n; i++)
    {
        if(*(ptr+i) > max) max = *(ptr+i);
        if(*(ptr+i) < min) min = *(ptr+i);
    }
    printf("Max=    %d\n", max);
    printf("Min=    %d\n", min);
    

    int b[] = {6, 45, 23, 67, 43, 88, 102};
    int k = sizeof(b) / sizeof(b[0]);
    int *end = b + k;
    int max2 = *b, min2 = *b;;

    for(int *p = b + 1; p < end; p++)
    {
        if(*p > max2) max2 = *p;
        if(*p < min2) min2 = *p;
    }
    printf("Max2    = %d\n", max2);
    printf("Min2    = %d\n", min2);
    
    return 0;
}