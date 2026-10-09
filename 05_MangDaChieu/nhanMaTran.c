#include <stdio.h>

#define MAX 10

void nhapMaTran(int mt[][MAX], int hang, int cot, char ten)
{
    printf("Nhap ma tran %c:\n", ten);
    for(int i = 0; i < hang; i++)
    {
        for(int j = 0; j < cot; j++)
        {
            printf("%c[%d][%d] = ", ten, i, j);
            scanf("%d",&m[i][j]);
        }
    }
}

void inMaTran(int mt[][MAX], int hang, int cot, char ten) {
    printf("Ma tran %c (%dx%d):\n", ten, hang, cot);
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++)
            printf("%d\t", mt[i][j]);
        printf("\n");
    }
}


void nhanMaTran(int A[][MAX], int B[][MAX], int C[][MAX], int m, int n, int p)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < p; j++)
        {
            C[i][j] = 0
            for(int k = 0; k < n; k++)
            {
                C[i][j] +=  A[i][k] * B[k][j];
            }
        }
    }
}
int main(void)
{   
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];

    int m,n,p;

    printf("=== NHAN HAI MA TRAN ===\n");
    printf("So hang A (m): ");        scanf("%d", &m);
    printf("So cot A = so hang B (n): "); scanf("%d", &n);
    printf("So cot B (p): ");         scanf("%d", &p);

    if(m > MAX || n > MAX || p > MAX)
    {
        printf("Kich thuoc khonog hop le\n");
        return 1;
    }

    nhapMaTran(A, m, n, 'A');
    nhapMaTran(B, n, m, 'B');
    nhanMaTran(A, B, B, m, n, p);

    printf("\nKet qua:\n");
    inMaTran(C, m, p, 'C');

    return 0;
}