#include <stdio.h>
#define MAX 10

void transposeSquare(int m[MAX][MAX], int n)
{
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++)
        {
            int temp = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = temp;
        }
    }
}

int isSymetric(int m[MAX][MAX], int n)
{
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
        {
            if(m[i][j] != m[j][i])
                return 0;
        }

    return 1;
}

int main(void)
{
    int m[MAX][MAX], n;
    printf("Nhap kich thuoc ma tran vuong: ");
    scanf("%d",&n);

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &m[i][j]);
    
    transposeSquare(m, n);

    printf("Ma tran sau khi chuyen doi:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    printf(isSymetric(m, n) ? "Doi xung!\n" : "khong doi xung\n");

    return 0;
}