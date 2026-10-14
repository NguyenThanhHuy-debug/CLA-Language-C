#include <stdio.h>

int tinhTong(void *ptrA, void *ptrB)
{

    int valA = *(int*)ptrA;
    int valB = *(int*)ptrB;

    return valA + valB;
}

int main(void)
{
    int a, b;
    
    if(scanf("%d %d", &a, &b) == 2)
    {
        void *ptrA = &a;
        void *ptrB = &b;

        int tong = tinhTong(ptrA, ptrB);

        printf("%d\n", tong);
    }

    return 0;
}