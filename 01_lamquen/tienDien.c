#include <stdio.h>

int main() {
    // float soKwh;   // 45.5
    // float donGia = 1500;      // don gia co dinh
    // float tienTruocThue;      // tien chua co thue
    // float tienSauThue;        // tien da cong VAT 10%

    // printf("Nhap so kWh da su dung: ");
    // scanf("%f", &soKwh);

    // tienTruocThue = soKwh * donGia;       // tinh tien goc  45.5 * 1500 = 68250
    // tienSauThue = tienTruocThue * 1.1;    // cong them 10% VAT 68250 * 1.1 = 75075

    // printf("\n=== HOA DON TIEN DIEN ===\n");
    // printf("So kWh su dung: %.2f kWh\n", soKwh);
    // printf("Tien truoc thue: %.0f dong\n", tienTruocThue);
    // printf("Thue VAT 10%%: %.0f dong\n", tienTruocThue * 0.1); 
    // printf("Tong thanh toan: %.0f dong\n", tienSauThue);

    // return 0;

    

    // float soKwh = 0.0f;
    // printf("Nhap sp KWh da su dung: ");
    // if(scanf("%f", &soKwh) != 1)
    // {
    //     printf("Loi: ban phai nhap mot so thuc.\n");
    //     return 1; // Exit with error code
    // }

    // float donGia = 1500.0f;
    // float tientruocthue = 0.0f;
    // float tienSauThue = 0.0f;

    // tientruocthue = soKwh * donGia;
    // tienSauThue = tientruocthue * 1.1f;
    // printf("Tien thue phai chiu: %.0f VND\n", tientruocthue * 0.1f);
    // printf("So tien dien phai tra la : %.0f VND", tienSauThue);

    float kwh1 = 0.0f, kwh2 = 0.0f, kwh3 = 0.0f;
    printf("Nhap so lan luot: ");
    if(scanf("%f %f %f", &kwh1, & kwh2, &kwh3) != 3)
    {
        printf("Loi: ban phai nhap 3 so thuc.\n");
        return 1;
    }

    double tongTrungBinh = (kwh1 + kwh2 + kwh3) / 3.0;
    printf("Tong trung binh 3 lan luot la: %.2f kWh\n", tongTrungBinh);
    return 0;
}
