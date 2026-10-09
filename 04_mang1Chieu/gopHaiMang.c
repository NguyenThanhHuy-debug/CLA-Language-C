#include <stdio.h>

void mergeArray(int arr1[], int arr2[], int size1, int size2, int res[])
{
    for(int i = 0; i < size1; i++)
    {
        res[i] = arr1[i];
    }
    for(int i = 0; i < size2; i++)
    {
        res[size1 + i] = arr2[i];
    }
}

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr1[] ={1 , 5, 8, 2};
    int arr2[] = {4 , 8, 9};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int size3 = size1 + size2;

    int res[size3] = {};

    mergeArray(arr1, arr2, size1, size2, res);
    
    printf("Mang sau khi gop xong: \n");
    printArray(res, size3);

    return 0;
}