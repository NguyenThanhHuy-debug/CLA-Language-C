#include <stdio.h>

#define MAX 100

int main()
{
    int arr[MAX] = {10, 20, 30, 40, 50};
    int n = 5, value = 30;

    int pos = -1;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] ==  value) {
            pos = i;
            break;
        }
    }

    for(int j = pos; j < n; j++)
    {
        arr[j] = arr[j+1];
    }
    n--;
    
    for(int k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }

    return 0;
}