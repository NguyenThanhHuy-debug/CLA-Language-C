#include <stdio.h>
#include <string.h>


struct SinhVien {char hoTen[50]; int tuoi; float diemTB; };

struct SinhVien sv;
struct SinhVien *p = &sv;

void theoGiaTri(struct SinhVien sv){
    sv.tuoi = 100;
}

void theoConTro(struct SinhVien *sv)
{
    sv->tuoi = 25;
}

int main(void)
{
    struct SinhVien sv;
    struct SinhVien *p = &sv;

    strcpy(p->hoTen, "Nguyen Van A");
    p->tuoi = 20;
    p->diemTB = 8.5f;

    (*p).tuoi = 21;

    printf("%s - %d - %.1f\n", p->hoTen, p->tuoi, p->diemTB);
    
    struct SinhVien sv1 = {"An, 19, 8.2f"};
    theoGiaTri(sv1); printf("%d\n", sv1.tuoi);
    theoConTro(&sv1); printf("%d\n", sv1.tuoi);
    return 0;
}