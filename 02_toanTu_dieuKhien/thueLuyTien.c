#include <stdio.h>


int main(void)
{

    double thu_nhap;

    double thue_phai_tra;

    const double NGUONG_1 = 5000000.0;
    const double NGUONG_2 = 10000000.0;
    const double NGUONG_3 = 18000000.0;
    
    const double TS_1 = 0.05;
    const double TS_2 = 0.1;
    const double TS_3 = 0.15;
    const double TS_4 = 0.2;

    printf("Nha thu nhap (VND): ");
    scanf("%lf", &thu_nhap);
    
    if(thu_nhap <= NGUONG_1)
    {
        thue_phai_tra = thu_nhap * TS_1;
    }
    else if(thu_nhap <= NGUONG_2)
    {
        thue_phai_tra = NGUONG_1 * TS_1 + (thu_nhap - NGUONG_1) * 0.1;
    }
    else if(thu_nhap <= NGUONG_3)
    {
       thue_phai_tra = NGUONG_1 * TS_1 + (NGUONG_2 - NGUONG_1) * TS_2 + (thu_nhap - NGUONG_2) * TS_3;
    }
    else
    {
        thue_phai_tra = NGUONG_1 * TS_1 + (NGUONG_2 - NGUONG_1) * TS_2 + (NGUONG_3 - NGUONG_2) * TS_3 + (thu_nhap - NGUONG_3) * TS_4;
    }

    printf("\n--- KET QUA ---\n");
    printf("Thu nhap       : %.2lf VND\n", thu_nhap);
    printf("Thue phai nop  : %.2lf VND\n", thue_phai_tra);
    printf("Con lai sau thue: %.2lf VND\n", thu_nhap - thue_phai_tra);
    return 0;
}