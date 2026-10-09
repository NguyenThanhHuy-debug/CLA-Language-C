#include <stdio.h>
#include <string.h> // ham strlen


void reverseArray(int *arr, int n)
{
    if(arr == NULL || n <= 1) return;

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

void reverseString(char *str)
{
    if(str == NULL || *str = '\0') return;
    char *left = str;
    char *right = str + strlen(str) -1;
    while(left < right)
    {
        char t = *left; 
        *left = *right;
        *right = t;
        left++;
        right--;
    }
}

// Dao mot doan 
void reversePart(int *arr, int l, int r)
{
    int *left = arr + 1, *right = arr + r;
    while(left < right)
    {
        int t = *left;
        *left = *right;
        *right = t;
        left++;
        right--;
    }
}

void reverseRows(int m[][3], int rows, int cols)
{
    for(int i = 0; i < rows; i++)
    {
        int *left = m[i], *right = m[i] + cols -1;
        while(left < right)
        {
            int t = *left;
            *left = *right;
            *right = t;
            left++;
            right--;
        }
    }
}

int main(void)
{

    int a[] ={1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    reverseArray(a, n);
    for(int i = 0; i < n; i++) printf("%d ", a[i]);

    return 0;
}