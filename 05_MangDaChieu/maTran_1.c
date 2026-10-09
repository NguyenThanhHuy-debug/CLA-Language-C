#include <stdio.h>

#define MAX 10

void nhapMaTran(int m[MAX][MAX], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d ",&m[i][j]);
        }
        printf("\n");
    }
}

void xautMaTran(int m[MAX][MAX], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    int r, c, chon;
    int a[MAX][MAX], b[MAX][MAX], kq[MAX][MAX];

    printf("Nhap so hang: "); scanf("%d",&r);
    printf("Nhap so cot: "); scanf("%d",&c);

    if(r <= 0 || r > MAX || c <= 0 || c > MAX)
    {
        printf("Kích thuoc khong hop le\n");
        return 1;
    }

    printf("------Ma Tran A------\n"); nhapMaTran(a,r,c);
    printf("------Ma Tran B------\n"); nhapMaTran(b,r,c);

    printf("1. Cong 2.Tru\nChon: ");
    scanf("%d",&chon);

    for(int i = 0; i < r ;i++)
    {
        for(int j = 0; j < c; j++)
        {
            kq[i][j] = (chon == 1) ? a[i][j] + b[i][j]
                                    :a[i][j] - b[i][j];
        }
    }
    printf("Ket qua: \n");
    xautMaTran(kq, r, c);
    return 0;


}