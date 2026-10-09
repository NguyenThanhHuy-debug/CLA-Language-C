#include <stdio.h>

double tinh_thue(double thu_nhap)
{
    const double N1 = 5000000.0;
    const double N2 = 10000000.0;
    const double N3 = 18000000.0;
    const double TS1 = 0.05;
    const double TS2 = 0.1;
    const double TS3 = 0.15;
    const double TS4 = 0.2;

    if(thu_nhap <= N1)
    {
        return thu_nhap * TS1;
    }
    else if(thu_nhap <= N2)
    {
        return N1 * TS1 + (thu_nhap - N1) * TS2;
    }
    else if(thu_nhap <= N3)
    {
        return N1 * TS1 + (N2 - N1) * TS2 + (thu_nhap - N2) * TS3;
    }
    else
    {
        return N1 * TS1 + (N2 - N1) * TS2 + (N3 - N2) * TS3 + (thu_nhap - N3) * TS4;
    }
}
int main(void)
{
    double thu_nhap;
    printf("Nhap thu nhap hang thang (VND): ");
    if(scanf("%lf", &thu_nhap) != 1)
    {
        printf("Loi nhap du lieu!\n");
        return 1;
    }
    if(thu_nhap < 0)
    {
        printf("Thu nhap khong hop le!\n");
        return 1;
    }
    double thue = tinh_thue(thu_nhap);
    printf("Thue phai nop: %.2lf VND\n", thue);

    double thue_suat_tb = (thue / thu_nhap) * 100;

    printf("Thue suat trung binh: %.2lf%%\n", thue_suat_tb);
    return 0;
}