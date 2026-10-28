#include <stdio.h>

struct NhanVien {
    int maNV;
    char hoTen[50];
    int tuoi;
    float luong;
    char phongBan[30];
};


struct ToanThoiGian {float luongThang; int soNgayNghi; };
struct BanThoiGian {float luongGio; int soGio; };

union chiTiet{
    struct ToanThoiGian ft;
    struct BanThoiGian pt;
};

struct NhanVien {
    int maNV;
    char hoTen[50];
    char loai;

    union chiTiet chiTiet1;
};

struct NhanVien nv = { .maNV = 1, .loai = 'F'};
nv.chiTiet1.ft.luongThang = 2000000;


int timTheoMa(struct NhanVien ds[], int n, int ma)
{
    for(int i = 0; i < n; i++)
    {
        if(ds[i].maNV == ma)
        {
            return i;
        }
    }
    return -1;
}

void locLuongCao(struct NhanVien ds[], int n; float nguong)
{
    for(int i = 0; i < n; i++)
    {
        if(ds[i].luong > nguong){
            printf("%s - %.0f\n", ds[i].hoTen, ds[i].luong);
        }
    }
}

int demPhongBan(struct NhanVien ds[], int n; const char *pb)
{
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        if(strcmp(ds[i].phongBan, pb) == 0)
        {
            dem++;
        }
    }
    return dem;
}

int main(void)
{
    int idx = timTheoMa(ds, n, 1005);
    if(idx != -1) printf("%s\n", ds[idx].hoTen);
    else printf("Khong tim thay\n");

    return 0;
}