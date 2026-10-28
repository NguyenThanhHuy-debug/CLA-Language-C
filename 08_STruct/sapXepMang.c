#include <stdlib.h>
#include <string.h>

typedef struct {
    char maSV[50];
    char hoTen[50];
    float diemTB;
    int tuoi;
} SinhVien;

int theoTen(const void *a, const void *b)
{
    const SinhVien *x = (const SinhVien *)a;
    const SinhVien *y = (const SinhVien *)b;

    return strcmp(x->hoTen, y->hoTen);
}

int theoTuoi(const void *a, const void *b)
{
    const SinhVien *x = (const SinhVien *)a;
    const SinhVien *y = (const SinhVien *)b;

    if (x->tuoi < y->tuoi) return -1;
    if (x->tuoi > y->tuoi) return 1;
    return 0;
}

int theoDiem(const void *a, const void *b)
{
    const SinhVien *x = (const SinhVien *)a;
    const SinhVien *y = (const SinhVien *)b;

    if (x->diemTB > y->diemTB) return -1;
    if (x->diemTB < y->diemTB) return 1;
    return 0;
}