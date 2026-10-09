#include <stdio.h>

int main()
{
    // int n;
    // printf("Nhap so phan tu(N): ");
    // scanf("%d", &n);

    // int arr[n];

    // for(int i = 0; i<n ;i++)
    // {
    //     printf("arr[%d] = ", i);
    //     scanf("%d", &arr[i]);
    // }

    // for(int i = 0; i< n; i++)
    // {
    //     printf("%d ",arr[i]);
    // }

    int arr[] = {45, 12,23,67,34,89,56};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max1 = arr[0], viTriMax1 = 0, max2 = 0;
    int min = arr[0], viTriMin = 0;

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max1)
            {   max2 = max1;
                max1 = arr[i]; 
                viTriMax1 = i;
            }
        if(arr[i] < min)
            {min = arr[i]; viTriMin = i;}
    }

    printf("Phan tu lon nhat: %d max2= %d tai vi tri %d\n", max1, max2, viTriMax1);
    printf("Phan tu nho nha: %d tai vi tri %d\n", min,viTriMin);
    
    return 0;
}