#include <stdlib.h>

struct SinhVien {
    char hoTen[50];
    int tuoi;
    float diemTB;
}

struct SinhVien *sv = malloc((sizeof(struct SinhVien)));
if(sv == NULL) return 1;

strcpy(sv->hoTen, "Le Van C");
sv->tuoi = 20;
sv->diemTB = 9.0f;

printf("%s\n", sv->hoTen);
free(sv);

int n;
scanf("%d", &n);
struct SinhVien *ds = malloc(n * sizeof(struct SinhVien));
if(ds == NULL) return 1;
ds[0].tuoi = 20;

free(ds);


struct SinhVien *taoSV(const char *ten. int tuoi, float diem)
{
    struct SinhVien *sv = malloc(sizeof(struct SinhVien));
    if(sv) {
        strcpy(sv->hoTen, ten);
        sv->tuoi = tuoi;
        sc->diemTB = diem;
    }
    return sv;
}

//dung: struct SinhVien *x = taoSV("An". 20. 8.0);....free(x);