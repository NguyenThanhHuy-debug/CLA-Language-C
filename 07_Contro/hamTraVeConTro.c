#include <stdio.h>
#include <stdlib.h>

int *timLonHon(int *a, int *b)
{
    return (*a > *b) ? a : b; // tra ve dia chi cua a hoac b
}

int *timPhanTu(int *arr, int n, int x)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x)
        {
            return &arr[i];     // tra ve dai chi phan tu
        }
    }
    return NULL;    // khong tim thay
}

int *taoMang(int n)
{
    
    int *arr = (int*)malloc(n * sizeof(int));    // bo nho tren HEAP

    if(arr == NULL)  return NULL;

    for(int i = 0; i < n; i++)
    {
        arr[i] = i * 2;
    }
    return arr;         // an tona: heap saong sau khi ham ket thuc
}

int main(void)
{
    int x = 10, y = 20;
    int *kq = timLonHon(&x, &y);

    printf("Lon hon: %d\n", *kq); // 20

    *kq = 99;           // sua duoc bien goc qua con tro tra ve!
    printf("y = %d\n", y); // 99

    int a[] = {1, 2, 3, 4, 5};
    
    int *p = timPhanTu(a, 5, 3);

    if(p != NULL)
    {
        printf("Tim thay %d\n", *p);
    }else{
        printf("Khong thay \n");
    }

    int *m = taoMang(5);
    printf("%d \n", *m);

    free(m);

    return 0;
}