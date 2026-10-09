#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    unsigned long long factorial = 1; 

    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf(" Loi: Giai thua khong xac dinh");
        return 1;
    }
    // for(int i = 1; i <= n; i++)
    // {
    //     printf("%d: %llu x %d = ", i, factorial, i);
    //     factorial *= i; 
    //     printf("%llu\n", factorial);
    // }

    // int i = 1;
    // while (i <= n)
    // {
    //     factorial *= i;
    //     i++;
    // }

    for(int i = 1; i <= n; i++)
    {
        if(factorial > ULLONG_MAX / i)
        {
            printf("Loi: Giai thua vuot qua gioi han cua unsigned long long\n");
            return 1;
        }
        factorial *= i;
    }



    printf("Giai thua cua %d la: %llu", n, factorial);
    return 0;
}