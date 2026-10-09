#include <stdio.h>
#include <math.h>

int main(void)
{
    double a,b,c;

    double delta, x1,x2;

    printf("Nhap he so a: ");
    if(scanf("%lf",&a) != 1)
    {
        printf("Loi nhap du lieu!\n");
        return 1;
    }
    printf("Nhap he so b: ");
    if(scanf("%lf",&b) != 1)
    {
        printf("Loi nhap du lieu!\n");
        return 1;
    }
    printf("Nhap he so c: ");
    if(scanf("%lf",&c) != 1)
    {
        printf("Loi nhap du lieu!\n");
        return 1;
    }

    delta = b * b - 4 * a * c;

    if(delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Phuong trinh co 2 nghiem phan biet: x1 = %.2lf, x2 = %.2lf\n", x1, x2); 
    }
    else if(delta == 0 && fabs(a) < 1e-9)
    {
        x1 = -b / (2 * a);
        printf("Phuong trinh co nghiem kep: x1 = x2 = %.2lf\n", x1);
    }
    else
    {
        printf("Phuong trinh vo nghiem\n");
    }

    return 0;
}