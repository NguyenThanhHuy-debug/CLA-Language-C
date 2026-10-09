#include <stdio.h>

int soHoanHao(int t)
{
    int sum = 0;
    for(int i = 1; i < t - 1; i++)
    {
        if(t % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}
int main()
{
    int n;
    int sum =0;
    if(scanf("%d", &n) != 1)
    {
        printf("Nhap so nguyen duong");
        return 1;
    }
    if(n <= 0)
    {
        return 1;
    }

    int Result = soHoanHao(n);

    if(Result == n)
    {
        printf("%d la so hoan hao", n);
    }
    else{
        printf("%d khong la so hoan hao",n);
    }

    return 0;
}