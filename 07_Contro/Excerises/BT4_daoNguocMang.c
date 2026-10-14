#include <stdio.h>

void reverseArray(int *arr, int n)
{
    int *left = arr;
    int *right = arr + n -1;
    while(left < right)
    {
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}

void reverseArray2(int a[], int n)
{
    int j;
    for(int i = 0; i < n/2; i++)
    {
        j = n - 1 - i;
        int temp2 = a[i];
        a[i] = a[j];
        a[j] = temp2;
    }
}

void reverseArray3(int a[], int n)
{
    int i = 0;
    int j = n - 1;
    while(i < j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    reverseArray3(arr, n);

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}