#include <stdio.h>

void xepLoai(double diemTB)
{
    if(diemTB >= 9.0) printf("Xuat Sac\n");
    else if(diemTB >= 8.0) printf("Gioi\n");
    else if(diemTB >= 7.0) printf("Kha\n");
    else if(diemTB >= 5.0) printf("Trung Binh\n");
    else printf("Yeu\n");
}

int main(void)
{
    double toan, van, anh;
    if(scanf("%lf %lf %lf", &toan, &van, &anh) != 3 || toan < 0 || toan > 10 || van < 0  || van > 10 || anh  < 0 || anh > 10)
    {
        printf(" Loi nhap \n");
        return 1;
    }

    double diemTB = (toan + van + anh) / 3.0f;

    if(van < 3.5 || toan < 3.5 || anh  < 3.5)
    {
        printf("Yeu : Liet mon\n");
        return 0;
    }
    xepLoai(diemTB);

    return 0;
}
