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


void buddleSort(int *arr, int n)
{
    for(int *i = arr; i < arr + n -1; i++)
    {
        for(int *j = arr; j < arr + n - 1 - (i - arr); j++)
        {
            if(*j > *(j + 1))
            {
                int temp = *j;
                *j = *(j + 1);
                *(j + 1) = temp;
            }
        }
    }
}

void selectionSort(int *arr, int n)
{
    for(int *i = arr; i < arr + n - 1; i++)
    {
        int *min = i;
        for(int *j = i + 1; j < arr + n; j++)
        {
            if(*j > *min) *min = *j;
        }
        
        if(min != i)
        {
            int temp = *i;
            * i =  *min;
            *min = temp;
        }
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

    buddleSort(dest, n);
 
 //   reverseArrayPointer(dest, n);


    for(int *i = dest; i < dest + n; i++)
    {
        printf("%d ", *i);
    }

    return 0;
}