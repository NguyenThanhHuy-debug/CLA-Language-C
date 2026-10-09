#include <stdio.h>

bool laSoNguyenTo(int n)
{
    if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;

    for(int i  = 3; i * i <= n ; i++)
    {
        if(n % i == 0) return false;
    }
    
    return true;

}
int main(void)
{
    int dem = 0;
    printf("So nguyen to tu 1 den 50: \n");
    for(int i = 0; i <= 50; i++)
    {
        if(laSoNguyenTo(i))
        {
            printf("%d ", i);
            dem++;
        }
    }
    printf("\nTong: %d so nguyen to\n", dem);
    return 0;
}~