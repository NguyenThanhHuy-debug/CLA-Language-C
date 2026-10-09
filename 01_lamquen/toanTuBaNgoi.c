#include <stdio.h>

int main(void)
{
    int so; 
    printf("Nhap mto so nguyen: ");
    if(scanf("%d", &so) != 1)
    {
        printf("Loi: ban phai nhap mot so nguyen.\n");
        return 1;
    }

    printf("%d la so %s.\n", so, (so %2 == 0) ? "chan" : "le");

    return 0;
}