#include <stdio.h>
#include <math.h>
//#define PI 3.14159 // (bộ tiền xử lý thay thế văn bản)

//const double PI = 3.14159; // (biến chỉ đọc, có kiểu dữ liệu rõ ràng)

double tinh_dien_tich(double *ban_kinh)
{
    return M_PI * pow(*ban_kinh, 2); // M_PI là hằng số PI trong math.h
}

double tinh_dien_tich_vanh(double *ban_kinh_vanh)
{
    return M_PI * pow(*ban_kinh_vanh, 2); // M_PI là hằng số PI trong math.h
}
int main(void) {
    // double ban_kinh, dien_tich;

    // printf("Nhap ban kinh; ");
    // scanf("%lf", &ban_kinh);

    // if(ban_kinh <=0)
    // {
    //     printf("Ban kinh phai lon hon 0.\n");
    //     return 1;
    // }

    // dien_tich = PI * ban_kinh * ban_kinh;
    // printf("Dien tich hinh tron co ban kinh %.2f la: %.2f\n", ban_kinh, dien_tich);

    double ban_kinh;
    printf("Nhap ban kinh: ");
    if(scanf("%lf", &ban_kinh) != 1)
    {
        printf("Loi: ban phai nhap mot so thuc.\n");
        return 1; // Exit with error code
    }

    double ban_kinh_vanh = 0.0;
    printf("Nhap ban kinh vanh: ");
    if(scanf("%lf", &ban_kinh_vanh) != 1)
    {
        printf("Loi: ban phai nhap mot so thuc.\n");
        return 1; // Exit with error code
    }

    double dien_tich = tinh_dien_tich(&ban_kinh);

    printf("Dien tich hinh tron la : %.2f\n", dien_tich);

    double dien_tich_vanh = tinh_dien_tich_vanh(&ban_kinh_vanh) - dien_tich;

    printf("Dien tich vanh la : %.2f\n", dien_tich_vanh);

    return 0;
}