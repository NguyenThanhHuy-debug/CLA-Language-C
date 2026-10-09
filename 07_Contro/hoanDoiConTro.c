// #include <stdio.h>

// int main(void) {
//     int x = 42;
//     int *p = &x;        // p luu dia chi cua x

//     printf("Gia tri x:        %d\n", x);      // 42
//     printf("Dia chi cua x:    %p\n", (void*)&x);
//     printf("p (dia chi):      %p\n", (void*)p);
//     printf("*p (gia tri):     %d\n", *p);     // 42 - qua p doc duoc x
//     return 0;
// }
#include <stdio.h>

int swap(int *a, int *b)
{
    if(a == NULL || b == NULL)
    {
        return 1;
    }
    int temp = *a;
    *a = *b;
    *b = temp;

    return 0;
}

void swapChar (char *a, char *b) { char t = *a; *a = *b; *b = t;}

void rotate(int *a, int *b, int *c) { int t = *a; *a = *b; *b = *c; *c = t;}

void swapMinMax(int arr[], int n)
{
    int minIndex = 0;
    int maxIndex =0;
    
    for(int i = 1; i < n; i++)
    {
        if(arr[i] < arr[minIndex])
        {
            minIndex = i;
        }

        if(arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }
    }

    swap(&arr[minIndex], &arr[maxIndex]);
}

int main(void)
{
    int x = 5, y = 10;
    printf("Truoc: x =%d y=%d\n", x, y);
    if(swap(&x, &y) != 1)
    {
    printf("Sau:   x =%d y=%d\n", x, y);
    }

    int j = 5, k = 10, m =20;
    printf("Truoc: j =%d k=%d m=%d\n", j, k, m);
    rotate(&j, &k, &m);
    printf("Sau:   j =%d k=%d m=%d\n", j, k, m);

    // [Thử thách] Viết hàm swapMinMax(int arr[], int n): 
    // tìm phần tử nhỏ nhất và lớn nhất rồi hoán đổi vị trí chúng, dùng swap con trỏ. 
    // Test {3,7,2,9,1} → {3,7,9,1,2} (đổi chỗ 1 và 9… kiểm lại vị trí).
    int arr[] ={3, 7, 2, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    swapMinMax(arr, n);

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }   

    return 0;
}