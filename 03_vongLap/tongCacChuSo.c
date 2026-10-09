#include <stdio.h>
#include <stdlib.h>

int main()
{
    int so, sum = 0;
    printf("Nhap so can tinh: ");
    if(scanf("%d", &so) != 1)
    {
        printf("Loi nhap dung so");
        return 1;
    }
    so = abs(so);
    while(so != 0)
    {
        int temp = so % 10 ;
        printf("%d->", temp);
        sum += temp;
        so /= 10;
    }
    // 
    int n = so;
    for(int n = so; n != 0; n/= 10)
    {
        sum += n % 10;
    }

    printf("Tong cac chu so: %d\n", sum);
    printf("%d %s chia het cho 3\n", so, (sum%3==0)?" ":"khhong");
    printf("%d %s chia het cho 9\n", so, (sum%9==0)?" ":"khhong");
    return 0;
}