#include <stdio.h>
#include <string.h>

enum KieuDL { KIEU_INT, KIEU_FLOAT, KIEU_STRING };   // cac loai

union GiaTri {                    // vung nho dung chung
    int   soNguyen;
    float soThuc;
    char  chuoi[50];
};

struct DuLieu {                   // BOC union + co
    enum KieuDL kieu;             // co: dang chua gi?
    union GiaTri gt;
};

void inRa(struct DuLieu d) {
    switch (d.kieu) {             // xem co roi doc dung nhanh
        case KIEU_INT:    printf("int: %d\n", d.gt.soNguyen); break;
        case KIEU_FLOAT:  printf("float: %.2f\n", d.gt.soThuc); break;
        case KIEU_STRING: printf("chuoi: %s\n", d.gt.chuoi); break;
    }
}

int main(void) {
    struct DuLieu a = { .kieu = KIEU_INT };   a.gt.soNguyen = 100;
    struct DuLieu b = { .kieu = KIEU_FLOAT }; b.gt.soThuc = 3.14f;
    struct DuLieu c = { .kieu = KIEU_STRING };
    strcpy(c.gt.chuoi, "Xin chao");

    inRa(a); inRa(b); inRa(c);
    return 0;
}
