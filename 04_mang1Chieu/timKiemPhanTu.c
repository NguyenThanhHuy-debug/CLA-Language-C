#include <stdio.h>

int timKiemTuyenTinh(int arr[], int n, int soTim)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == soTim)
        {
            return i;
        }
    }

    return -1;
}

int timKiemTuyenTinh(int arr[], int n, int x)
{
    int low = 0, high = n -1;
    while(low <= high)
    {
        int mid = low + (high-low) / 2;
        
        if(arr[mid] == x)
        {
            return mid;
        }
        else if(arr[mid] < x)
        {
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    return -1;
}
int main()
{
    int arr[] = {23, 45, 0, 7, 89, 56};
    int n = sizeof(arr) / sizeof(arr[0]);

    int vitri = timKiemTuyenTinh(arr, n, 89);

    if(vitri != 1)
    {
        printf("Tim thay so 89 tai vi tri %d\n",vitri );
    }else{
        printf("Khong tim thay so 89");
    }

    return 0;
}