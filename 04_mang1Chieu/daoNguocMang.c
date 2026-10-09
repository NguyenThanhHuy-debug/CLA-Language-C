#include <stdio.h>

void reverse2(int arr[], int n)
{
    int j;
    for(int i = 0; i < n/2; i++)
    {
        j = n -1 - i;
        int temp2 = arr[i];
        arr[i] = arr[j];
        arr[j] = temp2;
    }
}
void reverse(int arr[], int n)
{
    int i =0;
    int j = n-1;

    while(i < j)
    {
        int temp = arr[i]; //1) cất arr[i] vào biến tạm

        arr[i] = arr[j];  //2) chép arr[j] vào arr[i]

        arr[j] = temp;  // 3) chép biến tạm vào arr[j]

        i++;   // tiến con trỏ đầu
        j--;   // lùi con trỏ cuối
    }
}

void reverse_ptr(int *arr, int n)
{
    int *start = arr;

    int *end = arr + n -1;

    while(start < end)
    {
        int temp = *start;

        *start = *end;

        *end = *start;

        start++;
        end--;
    }
}
int main()
{

    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(arr[0]);

    reverse_ptr(arr, n);

    printf("Mang sau khi dao nguoc: ");

    for(int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}