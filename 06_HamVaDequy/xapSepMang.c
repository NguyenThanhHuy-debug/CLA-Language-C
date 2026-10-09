#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void buddleSort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i -1; j++)
        {
            if(arr[j] > arr[j +1 ])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}


void selectionSort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int min = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min]) min = j;
            {
                swap(&arr[j] , &arr[min]);
            }
        }
    }
}

void insertionSort(int arr[]. int n)
{
    for(int i = 1; i < n; i++)
    {
        int key = arr[i], j = i - 1;
        while( j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[i];
            j--;
        }
        arr[j + 1] = key;
    }
}

int soSanhTang(const void *a, const vois *b)
{
    return (*(int)a - *(int)b);
}
int main(void)
{
    int a[] = {64, 34, 25, 12, 22};
    int n = sizeof(a) / sizeof(a[0]);

    buddleSort(a, n);

    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("/////////////////////\n");
    int b[] = {5, 2, 8, 1, 9};
    int n = sizeof(b) / sizeof(b[0]);
    qsort(b, n, sizeof(n), soSanhTang);


    return 0;
}