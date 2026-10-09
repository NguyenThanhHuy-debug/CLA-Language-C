#include <stdio.h>

int main(void)
{
    // int n;
    // printf("NHap so luong phan tu Fibonacci: ");
    // if(scanf("%d", &n) != 1)
    // {
    //     printf("Loi: Vui long nhap mot so nguyen");
    //     return 1;
    // }

    // long long prev = 0, curr = 1;

    // for(int i = 0; i < n ; i++)
    // {
    //     printf("%lld ", prev); // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
    //     long long next = prev + curr; // 0 + 1 = 1, 2, 3

    //     prev = curr; // prev = 1, 1, 2
    //     curr = next; // curr = 1, 2, 3
    // }
    
    long long limit;
    printf("Nhap gioi han: ");
    if(scanf("%lld", &limit) != 1)
    {
        printf("Loi: Vui long nhap mot so nguyen");
        return 1;
    }

    long long prev = 0, curr = 1;
    printf("Fibonacci <=  %lld: ", limit);
    while(prev <= limit)
    {
        if(prev % 2 == 0)
        {
            printf("%lld ", prev);
        }
        long long next = prev + curr;
        prev = curr;
        curr = next;
    }


    return 0;
}