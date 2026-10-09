#include <stdio.h>

void xapSepNoiBot(int arr[], int n)
{
   int i, j, temp;
   
   for(int i = 0; i < n -1 ; i++)
   {

    for(int j = 0; j < n-1; j++)
    {
        if(arr[j] > arr[j+1])
        { 
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
   }
}

void xapSepNoiBatToiUu(int arr[], int n)
{
    int i, j, temp;
    int coSwap;

    for(int i = 0; i < n - 1; i++)
    {
        int coSwap = 0;

        for(int j = 0; i < n - i -1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = arr[j];
            }
        }

        if(coSwap == 0)
        {
            break;
        }
    }
}

void xapSepChon(int arr[], int n)
{
    int i, j, min_idx, temp;

    for(int i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for(int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }

        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

void hienThiMang(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

}
int main(void)
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};

    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Mang ban dau: ");
    hienThiMang(arr, n);
    printf("\n");
    printf("Mang sau khi xap sep tang dan: ");
    xapSepNoiBot(arr, n);
    hienThiMang(arr,n);
    return 0;
}