#include <stdio.h>
#include <math.h>

int chuviTamGiac(int a, int b, int c)
{
    return a + b + c;
}

double dienTichTamGiac(int a, int b, int c)
{
    double p = (a + b + c) / 2.0;
    return sqrt(p * (p-a) * (p-b) * (p-c));
}

char * classify_triangle(int a, int b, int c)
{
    if(a <= 0 || b <= 0 || c <= 0) 
    {
        return "Do dai canh khong hop le";
    }

    if(a + b > c && a + c > b && b + c > a)
    {
        if(a == b && b == c)
        {
            return "Tam giac deu";
        }
        else if(a == b || a == c || b == c)
        {
            return "Tam giac can";
        }
        else if(a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
        {
            return "Tam giac vuong";
        }
        else
        {
            return "Tam giac thuong";
        }
    }
    else
    {
        return "Khong phai tam giac";
    }
}
int main(void)
{
    int a, b, c;
    int chuvi;
    double dienTich;
     printf("Nhap a b c: ");
     scanf("%d %d %d", &a, &b, &c);

     char *result =

        chuvi = chuviTamGiac(a, b, c);

        dienTich = dienTichTamGiac(a, b, c);
        printf("Chu vi: %d\n", chuvi);
        printf("Dien tich: %.2f\n", dienTich);
     }
     else
     {
         printf("Khong phai tam giac\n");
     }

     return 0;
}