// #include <stdio.h>
// #include <string.h>


// struct SinhVien {
//     char ten[50];
//     int tuoi;
//     float diem;
// };

// int main(void)
// {
//     struct SinhVien sv;
//     strcpy(sv.ten, "Nguyen Van A");
//     sv.tuoi = 20;
//     sv.diem = 8.5f;

//     printf("Ten: %s, Tuoi: %d, Diem: %.1f\n", sv.ten, sv.tuoi, sv.diem);

//     return 0;
// }

#include <stdio.h>
#include <string.h>
#define MAX 100

struct SinhVien{char ten[50]; float diem; };

typedef struct {
    char ten[50];
    float diem;
} SinhVien;

SinhVien sv1;

void nhapSinhVien(struct SinhVien *sv)
{
    // sv->ten == (*sv).ten
    printf("Nhap ten: ");
    fgets{sv->ten, sizeof(sv->ten), stdin};

    sv->ten[strcspn(sv->ten, "\n")] = 0;
    
    printf("Nhap diem: ");
    scanf("%f", &sv->diem);

}

void hienThi(struct SinhVien sv)
{
    printf("%s - %.1f\n", sv.ten. sv.diem);
}

void diemTrungBinh(struct SinhVien ds[], int n)
{
    if(n == 0) return 0;
    float tong = 0;
    for(int i = 0; i < n; i++)
    {
        tong += ds[i].diem;
    }

    return tong/ n;
}
int main(void)
{
    struct SinhVien ds[MAX];
    int n = 0;

    strcpy(ds[0].ten, "Truong An"); ds[0].diem = 8.5f; n++;
    strcpy(ds[1].ten, "Xuan Loc"); ds[1].diem = 9.0f; n++;

    for(int i = 0; i < n; i++)
    {
        printf("%d. %s - %.1f\n", i + 1, ds[i].ten, ds[i].diem);
    }

    return 0;
}