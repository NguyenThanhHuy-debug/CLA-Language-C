#include <stdio.h>
#include <stdlib.h>
// ham tim UCLN bang thuat toan Euclid

int gcd(int a, int b)
{
    a = abs(a);
    b = abs(b);
    while(b != 0)
    {
        int temp = b;
         b = a % b;
          a = temp;
    }

    return a;
}

int gcd3(int a, int b, int c)
{
    return gcd(gcd(a, b), c);
}

// ham tim BCNN dua tren UCLN
int lcm(int a, int b)
{
    return ( a / gcd(a, b)) * b;
}
int main()
{
    int a,b,c;

    printf("Nhap 3 so nguyen: ");
    if(scanf("%d %d %d", &a, &b, &c) != 3)
    {
        printf("Loi: Vui long nhap 2 so nguyen");
        return 1;
    }

    // int min = (a < b) ? a : b; // 12 18

    // for(int i = 1; i <= min; i++)
    // {
    //     if(a % i == 0 && b % i == 0)
    //     {
    //         gcd = i;
    //     }
    // }

    // printf("UCLN cua %d va %d la: %d", a, b, gcd);

    //UCLN( b, a % b) = UCLN(a, b)

    // while(b != 0)
    // {
    //     int temp = b;
    //     b = a % b;
    //     a = temp;
    // }

    // printf("UCLN cua 2 so la: %d", a);
    
    printf("UCLN = %d\n", gcd(a, b));
    printf("BCNN = %d\n", lcm(a,b));
    printf("UCLN3= %d\n", gcd3(a,b,c));
    
    return 0;
}