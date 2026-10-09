#include <stdio.h>
#include <stdbool.h>

//in ra 10 so nguyen to dau tien

bool la_so_nguyen_to(int n)
{
    if(n < 2)
    {
        return false;
    }
    
    if( n == 2) return true;
    
    if(n % 2 == 0) return false;
    
    for(int i = 3; i * i <= n; i+= 2)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
     int n;
     printf("Nhap so can kiem tra: ");
     if(scanf("%d", &n) != 1)
     {
         printf("Loi: Vui long nhap mot so nguyen");
         return 1;
     }

     int dem = 0;
     for(int i = 2; i <= n; i++)
     {
        if(la_so_nguyen_to(i))
        {
            dem++;
        }
     }

     printf("So luong so nguyen to tu 2 den %d la: %d\n", n, dem);

     if(la_so_nguyen_to(n))
        printf("%d la so nguyen to", n);
     else
        printf("%d khong phai la so nguyen to", n);

    return 0;
}