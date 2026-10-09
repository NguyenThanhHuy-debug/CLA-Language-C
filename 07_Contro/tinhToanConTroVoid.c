#include <stdio.h>

// in mang bay kuu: dia chi, so phan tu, kich thuoc moi phan tu, ham in
void intMang(void *arr, int n, int elemSize, void (*intPhanTu)(void*))
{
    for(int i = 0; i < n; i++)
    {
        void *elem = (char*)arr + i *elemSize; // tinh dia chi phan tu i (theo byte)
        intPhanTU(elem);
    }
    printf("\n");
}

void inInt (void *p) { printf("%d ", *(int*)p); }
void inFloat (void *p) { printf("%.1f ", *(float*)p); }


int main(void)
{
    int a[] = {1, 2, 3};
    float b[] = {1.2f, 2.2f, 3.3f};
    
    intMang(a, 3, sizeof(int), inInt);
    intMang(b, 3, sizeof(float), inFloat);
    
    return 0;
}