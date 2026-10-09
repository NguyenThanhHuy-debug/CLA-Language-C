#include <stdio.h>

void timMinMax(const int *arr, int n, int *min, int *max)
{
    *max = *arr;
    *min = *arr;

    for(int i = 0; i < n ; i++)
    {
        if(arr[i] > *max) *max = arr[i];

        if(arr[i] < *min) *min = arr[i];
    }
}

void timMaxViTri(const int *arr, int n, int *maxVal, int *maxIdx)
{
    *maxVal = arr[0];
    *maxIndex = 0;
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > *maxVal)
        {
            *maxVal = arr[i];
            *maxIdx = i;
        }
    }
}
int main(void)
{
    int arr[] ={12, 6, 33, 68, 32, 91, 111};
    int n = sizeof(arr) / sizeof(arr[0]);

    int min, max;

    timMinMax(arr, n, &min, &max);
    printf("Max     =%d\n", max);
    printf("Min     =%d\n", min);
    
    return 0;
}