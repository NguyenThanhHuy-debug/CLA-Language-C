#include <stdio.h>

#define MAX 100

int main()
{
    int arr[MAX] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos = 2; // xoa phan tu arr[2]

    
    if(pos < 0 || pos >= n)
    {
        printf("Vi tri khong hop le\n");
        return 1;
    }

    for(int i = pos; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    n--;

    printf("Sau khi xoa: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);

    return 0;
}