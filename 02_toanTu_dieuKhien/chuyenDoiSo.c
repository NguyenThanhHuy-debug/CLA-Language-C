#include <stdio.h>

int main(void)
{
    int n;
    printf("Nhap so nguyen n: ");
    if(scanf("%d", &n) != 1)
    {
        printf("Loi nhap du lieu!\n");
        return 1;
    }

    if(n % 2 == 0)
    {
        printf("%d la so chan\n", n);
    }
    else
    {
        printf("%d la so le\n", n);
    }

    return 0;
}