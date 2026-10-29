#include <stdio.h>

struct NgayThang {
    int ngay;
    int thang;
    int nam;
};

struct SinhVien {
    char hoTen[50];
    int maSo;
    struct NgayThang ngaySinh;
    float diemTB;
};

struct ThoiGian {int gio, phut; };

struct SuKien {
    char ten[100];
    struct NgayThang ngay;
    struct ThoiGian gioBatDau;
    int thoiLuong;
};

struct SuKien hoiThao = {
    "Hoi thao CNTT",
    {20, 11, 2023},
    {8, 30},
    120
};

printf("%d/%d luc %02d:%02d\n",
       hoiThao.ngay.ngay, hoiThao.ngay.thang,
       hoiThao.gioBatDau.gio, hoiThao.gioBatDau.phut);

int main(void)
{
    struct SinhVien sv = {
        "Nguyen Van A",
        1001,
        {15, 8, 2000},
        8.5f
    };

    printf("Ten: %s\n", sv.hoTen);
    printf("Ngay sinh: %d/%d/%d\n",
            sv.ngaySinh.ngay,
            sv.ngaySinh.thang,
            sv.ngaySinh.nam);

    return 0;
}