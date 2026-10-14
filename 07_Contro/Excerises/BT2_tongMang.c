#include <stdio.h>

// int tongMang(int a[], int n)
// {
//     int sum = 0;
//     for(int i = 0; i < n; i++)
//     {
//         sum += a[i];
//     }
//     return sum;
// }

int tongMangConTro(int *a, int n)
{
    int sum = 0;
    
    for(int i = 0; i < n; i++)
    {
        sum += *(a + i);
    }
    
    return sum;
}

int tongMangConTro2(int *a, int n)
{
    int tong = 0;
    int *ptr = a;
    int *end = a + n;

    for(ptr = a; ptr < end; ptr++)
    {
        tong += *ptr;
    }

    return tong;
}

int main(void)
{
    
    int n;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int result = tongMangConTro2(a, n);
    printf("%d", result);
    return 0;
}