#include <stdio.h>

int isLeapYear(int year)
{
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        return 1; // Nam nhuan
    }
    else
    {
        return 0; // Khong phai nam nhuan
    }
}

int isLeapYear2(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main(void)
{
    int year;
    printf("Nhap nam can kiem tra: ");
    if(scanf("%d", &year) != 1)
    {
        printf("Loi nhap du lieu \n");
        return 1;
    }

    if(isLeapYear2(year))
    {
        printf(":))\n");
        printf("%d la nam nhuan.\n", year);
    }
    else
    {
        printf(":(\n");
        printf("%d khong phai la nam nhuan.\n", year);
    }

    return 0;
}