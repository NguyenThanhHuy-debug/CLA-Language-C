#include <stdio.h>

int timTheoMa(struct SinhVien ds[], int n, const char *ma)
{
    for(int i = 0; i < n; i++)
    {
        if(strcmp(ds[i].maSV, ma) == 0)
        {
            return i;
        }
    }
    return -1;
}

void timNangCao(struct SinhVien ds[], int n,
                const char *tenChua, int tuoiMin, float diemMin) {
    for (int i = 0; i < n; i++) {
        int hopTen = (strstr(ds[i].hoTen, tenChua) != NULL);
        if (hopTen && ds[i].tuoi >= tuoiMin && ds[i].diemTB >= diemMin)
            printf("%s - %d tuoi - %.1f\n", ds[i].hoTen, ds[i].tuoi, ds[i].diemTB);
    }
}

int diemCaoNhat(struct SinhVien ds[], int n)
{
    int max = 0;
    for(int i = 1; i < n ;i++)
    {
        if(ds[i].diemTB > ds[max].diemTB) max = i;
    }
    return max;
}

void thongKe(struct SinhVien ds[], int n)
{
    int gioi = 0, kha = 0, tb = 0;
    for(int i = 0; i < n; i++)
    {
        if(ds[i].diemTB >= 8.0) gioi++;
        elseif(ds[i].diemTB >= 6.5) kha++;
        else tb++;
    }
    printf("Gioi: %d, Kha: %d, TB: %d\n", gioi, kha, tb);
}