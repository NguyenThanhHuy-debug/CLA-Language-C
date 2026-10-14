#include <stdio.h>
#include <string.h>


int sum(int a, int b) {return a + b;}
int tru(int a, int b) {return a - b;}
int nhan(int a, int b) {return a * b;}

int main(void)
{

    int a, b;
    scanf("%d%d", &a, &b);

    int (*phepToan)(int , int); // khai bao con tro ham

    switch(chon)
    {
        case 1: phepToan = cong; break;
        case 2: phepToan = tru; break;
        case 3: phepToan = nhan; break;
    }

    int kq = phepToan(a, b);  

    printf("%d", kq);


    return 0;
}