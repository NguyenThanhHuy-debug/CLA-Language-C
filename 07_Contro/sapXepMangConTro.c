// bubble sort bang con tro

#include <stdio.h>
#include <String.h> // strlen

void sapChuoi(char *str)
{
    int len = strlen(str);

    for(int *i = str; i < str + len - 1; i++)
    {
        for(int *j = i + 1; j < str + len; j++)
        {
            if(*i > *j)
            {
                char t = *i;

                *i = *j;
                *j = t;
            }
        }
    }
}

void nhapMang(int *arr, int n)
{
    for(int *p = arr; p < arr + n; p++)
    {
        printf("Phan tu %ld: ", p - arr + 1); // p - arr = chi so
        
        scanf("%d", p); // p la dia chi # &arr[i]
    }
}

void inMang(const int *arr, int n)
{
    for(const int *p = arr; p < arr + n; p++)
    {
        printf("%d", *p);
    }
    printf("\n");
}

void bubbleSort(int *arr, int n)
{
    for(int *i = arr; i < arr + n - 1; i++)
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
            if(*j < *min) min = j;
        }
        if(min != i)
        {
            int temp = *i;

            *i = *min;
            *min = temp;
        }
    }
}

int main(void)
{
    int a[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(a) / sizeof(a[0]);
    bubbleSort(a, n);

    for(int *p = a; p < a + n; p++)
    {
        printf("%d ", *p);
    }

    printf("\n");
    int b[] = {64, 34, 25, 12, 22, 11, 90};
    int nb = sizeof(b) / sizeof(b[0]);
    selectionSort(b, n);

    for(int *p = a; p < a + n; p++)
    {
        printf("%d ", *p);
    }

    return 0;
}