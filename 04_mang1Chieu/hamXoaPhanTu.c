#include <stdio.h>

#define MAX 100

int deleteAtPositon(int arr[], int *n, int pos)
{
    if(pos < 0 || pos >= *n) return 0;
    for(int i = pos; i < *n - 1; i++)
    {
        arr[i] = arr[i+1];        
    }

    (*n)--;
    return 1;
}

int deleteByValue(int arr[], int *n, int value)
{
    int viTriCanTim = -1;
    for(int i = 0; i < *n; i++)
    {
        if(arr[i] == value)
        {
            viTriCanTim = i;
            return deleteAtPositon(arr, n, viTriCanTim);
        }
    }
     return 0;
}
int main()
{
    int arr[MAX] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    
    int pos = 1; // xoa arr[1]
    deleteAtPositon(arr, &n, pos);
    deleteByValue(arr, &n, 30);

    for(int i = 0; i < n; i++) printf("%d ",arr[i]);

    return 0;
}