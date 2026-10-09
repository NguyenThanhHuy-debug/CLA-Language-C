#include <stdio.h>

int count_even(int arr[], int n)
{
    int count_even = 0;
    for(int i = 0; i < n;i++)
    {
        if(arr[i] % 2 == 0) count_even++;
    }
    return count_even;
}

int main()
{
    int arr[] = {5, 8,11, 36, 23, 55, 89};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("%d\n", count_even(arr,n));
    int count_odd = n - count_even(arr, n);
    
    
    if(count_odd != 1)
    {
        printf("Chan, Le: %d %d", count_odd, count_even(arr, n));

    }
    return 0;
}