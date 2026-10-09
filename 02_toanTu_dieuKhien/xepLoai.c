#include <stdio.h>

void xeploai(float diem)
{
    if(diem >= 9.0) printf("Xuat Sac\n");
    else if(diem >= 8.0) printf("Gioi\n");
    else if(diem >= 7.0) printf("Kha\n");
    else if(diem >= 5.0) printf("Trung Binh\n");
    else printf("Yeu\n");
}

int main(void)
{
    float diem;
    printf("Nhap diem cua ban: ");
    if(scanf("%f", &diem) != 1 || diem < 0 || diem > 10)
    {
        printf("Loi nhap du lieu!\n");
        return 1;
    }

    printf("Diem %.1f -> ", diem);
    xeploai(diem);

    return 0;
}