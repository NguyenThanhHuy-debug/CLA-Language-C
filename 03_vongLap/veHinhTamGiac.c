#include <stdio.h>

int main()
{
    // for(int i = 1;  i <= 3; i++)
    // {
    //     for(int j = 1; j <= 3; j++)
    //     {
    //         printf("(%d,%d) ", i, j);
    //     }
    //     printf("\n");
    // }

    // for(int i = 1; i <= 5; i++)
    // {
    //     for(int j = 1; j <= i; j++)
    //     {
    //         printf("%d ",j);
    //     }
    //     printf("\n");
    // }

    // int n = 5;
    // int num =1;

    // for(int i = 1; i <= n; i++)
    // {
    //     for(int j = 1; j <= i; j++)
    //     {
    //         printf("%d ", num); //1 ,2 3 
    //         num++; // 2 3 4
    //     }
    //     printf("\n");
    // }

    int n = 5;
    for(int i = 1; i <= n; i++)
    {
        for(int s = 1; s <= n-i; s++)
        {
            printf(" ");
        }
        for(int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}