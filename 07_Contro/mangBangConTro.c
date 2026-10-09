#include <stdio.h>
int tinhTongMang(int *arr, int n)
{
    int tong =0;
    for(int i = 0; i < n; i++)
    {
        tong += *(arr + i);
    }
    return tong;
}

int tinhTong(int *arr, int n)
{
    int tong =0;
    int *end = arr + n;
    for(int *p = arr; p < end; p++)
    {
        tong += *p;
    }
    return tong;
}

//Thuc hanh
int timMax(int *arr, int n)
{
    int max = *arr;

    for(int i = 0; i < n; i++)
    {
        if(*(arr + i) > max)
        {
            max = *(arr + i);
        }
    }

    //tim chi so lon nhat
    int *ptrIndex = arr;
    int maxIndex = 0;
    
    for(int i = 0; i < n; i++)
    {
        if(*(arr + i) > *ptrIndex)
        {
            maxIndex = i;
        }
    }

    return maxIndex;
}

int timMax2(int *arr, int n)
{
    int max = *ar;
    int *ptr = arr + 1;

    for(int i  = 0; i < n; i++)
    {
        if(*ptr > max)
        {
            max = *ptr;
        }
        ptr++;
    }
    return max;
}
int main(void)
{
    int arr[5] = {10, 20, 30, 40, 50};
    printf("*arr        = %d\n", *arr);
    printf("arr[0]      = %d\n", arr[0]);
    printf("dia chi     = %p\n", (void*)arr);

    //Gan mot mang cho 1 con tro
    int *ptr = arr;
    printf("%d\n", *(ptr+0));  //10
    printf("%d\n", *(ptr+2)); //30
    printf("%d\n", *(ptr+4)); //50

    int tong = 0;
    for(int i = 0; i < 5; i++)
    {
        tong += *(ptr+i);
    }
    printf("Tong  = %d\n", tong);

    int tong2 = 0;
    for(int i = 0; i < 5; i++)
    {
        tong2 += *ptr;
        ptr++;
    
    }
    printf("Tong2   = %d\n", tong2);

    int a[] ={10, 20, 30, 40, 50};
    int n = sizeof(a) / sizeof(a[0]);

    printf("Tong = %d\n", tinhTongMang(a, n));

    // Thuc hanh
    int arr1[] ={34, 7, 23, 32, 5, 62};
    int k = sizeof(arr1) / sizeof(arr1[0]);
    int *ptr1 = arr1;
    printf("Phan tu lon nhat: %d\n", timMax(ptr1, k));

    return 0;
}