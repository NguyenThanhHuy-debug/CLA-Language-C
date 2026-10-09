#include <stdio.h>

int main(void) {
    int i, j;
    for (i = 1; i <= 10; i++) {
        printf("Bang cuu chuong %d:\n", i);
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
    return 0;

    // while
    int i = 10;
    while(i <= 10)
    {
        printf("%d\n", i);
        i++;
    }
}