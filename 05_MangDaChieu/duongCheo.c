#include <stdio.h>

#define SIZE 3
#define SIZE1 4


int main() {
    int matrix[SIZE][SIZE] ={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };


    int subMain =0, sumSec = 0;
    for(int i = 0; i < SIZE; i++)
    {
        subMain += matrix[i][i];

        sumSec += matrix[i][SIZE-1-i];
    }
    printf("Tong duong cheo chinh: %d\n",subMain);
    printf("Tong duong cheo phu: %d\n",sumSec);

    int matrix1[SIZE1][SIZE1] = {
        { 1,  2,  3,  4},
        { 5,  6,  7,  8},
        { 9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    for(int i = 0; i < SIZE1; i++)
    {
        for(int j = 0; j < SIZE1; j++)
        {
            if(i == j) printf("[%2d] ", matrix1[i][j]);
        
            else if(i + j == SIZE - 1) printf("(%2d) ", matrix1[i][j]);

            else printf(" %2d ", matrix1[i][j]);
        }
        printf("\n");
    }

    return 0;
}