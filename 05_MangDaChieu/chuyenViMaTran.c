#include <stdio.h>
#define MAX 10

int main(void)
{
    int matrix[MAX][MAX];
    int transpose[MAX][MAX];
    int rows, cols;

    printf("Nhap so hang: ");
    scanf("%d", &rows);
    printf("Nhap so cot: ");
    scanf("%d", &cols);

    printf("Nhap cac phan tu cua ma tran:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Ma tran chuyen vi(%d%d):\n",cols,rows);
    for(int i = 0; i < cols; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}