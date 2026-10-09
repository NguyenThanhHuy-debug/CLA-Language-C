#include <stdio.h>

int binarySearch(int arr[], int n, int target)
{
    int left = 0, right = n - 1;

    while(left <= right)
    {
        int mid = left + (right - left) / 2;

        if(arr[mid] == target)
        {
            return mid;
        }
        else if(arr[mid] < target)
        {
            left = mid + 1;

        }else{

            right = mid - 1;
        
        }
    
    }
    return -1;
}

int binarySearchDeQuy(int arr[], int left, int right, int target)
{
    if(left > right) return -1;

    int mid = left + (right - left) / 2;

    if(arr[mid] == target) return mid;

    if(arr[mid] < target)

        return binarySearchDeQuy(arr, mid + 1, right, target);

    else
        return binarySearchDeQuy(arr, left, mid - 1, target);
}

int main(void)
{
    int a[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72};
    int n = sizeof(a) / sizeof(a[0]);

    printf("%d\n", binarySearch(a, n, 23));
    printf("%d\n", binarySearch(a, n, 30));
    printf("%d\n", binarySearchDeQuy(a, 0, n - 1, 45));
    

    return 0;
}