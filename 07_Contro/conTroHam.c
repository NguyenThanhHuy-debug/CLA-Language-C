// // int (*phepToan)(int, int); -> con tro toi ham: nhan 2 int, tra ve int

// #include <stdio.h>

// int cong(int a, int b) {
//     return a + b;
// }

// int main(void)
// {
//     int (*phepToan)(int, int); // khai bao con tro ham

//     phepToan = cong;            // gan (khong can &, ten ham = dia chi)
//     printf("%p\n", phepToan);
//     printf("%p\n", cong);
//     // phepToan = &cong;

//     int kq = phepToan(5, 3);    // goi qua con tro (nhu goi ham thuong)

//     printf("%d\n", kq);

//     return 0;

// }

#include <stdio.h>

typedef int (*phepTinh) (int, int); // dat ten kieu



int cong(int a, int b) {return a + b;}
int tru(int a, int b) {return a - b;}
int nhan(int a, int b) {return a * b;}

int tang(int x) {return x + 1;}

int giam(int x) {return x - 1;}

int nhanDoi(int x) {return x * 2;}

void xuLy(int so, int(*phep)(int))
{
    printf("%d -> %d\n", so, phep(so));
}

int main(void)
{
    int(*tinhToan) (int, int);
    int x = 10, y = 5, chon = 3;

    switch(chon)
    {
        case 1: tinhToan = cong; break;
        case 2: tinhToan = tru; break;
        case 3: tinhToan = nhan; break;
        default: return 1;
    }
    printf("Ket qua: %d\n", tinhToan(x, y));
 
 /////------------------callback--------------------
    xuLy(10, tang);
    xuLy(10, giam);
    xuLy(10, nhanDoi);

//-----------------------Mang con tro ham----------------

int (*ops[3])(int, int) = { cong , tru, nhan};  // mang 3 con tro ham
int kq = ops[2](8, 4);                           // goi nhan(8, 4) =32
 

phepTinh op = cong;
int (*old)(int , int) = cong;
    return 0;
}