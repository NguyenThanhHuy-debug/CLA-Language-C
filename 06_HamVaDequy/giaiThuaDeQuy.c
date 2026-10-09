#include <stdio.h>

long long tinhGiaiThua(int n) //ton stack -> tran stack
{
    if(n <= 1) return 1;
    return n * tinhGiaiThua(n -1);
}

long long giaiThuaVongLap(int n)  //O(1)
{
    long long kq = 1;
    for(int i = 2; i <= n; i++)
    {
        kq *= i;
    }
    return kq;
}
int main(void)
{
    int n;
    if(scanf("%d", &n) != 1)
    {
        return 1;
        printf("Yeu cau nhap so nguyen duong n");
    }

    printf("%d! = %lld\n", n, tinhGiaiThua(n));

    return 0;
}