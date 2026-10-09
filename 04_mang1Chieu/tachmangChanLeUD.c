#include <stdio.h>

#define MAX 50
void slitArray(int src[], int n, 
    int even[], int *evenCount, 
    int odd[], int *oddCount){

    *evenCount = 0;
    *oddCount = 0;
    for(int i = 0; i < n; i++)
    {
        if(src[i] % 2 == 0){
            even[*evenCount] = src[i];
            (*evenCount)++;
        }else
        {
            odd[*oddCount] = src[i];
            (*oddCount)++;
        }
    }

}


int main()
{
    int arr[] = {3, 8, 5, 2, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int even[MAX], odd[MAX], ec, oc;

    slitArray(arr, n, even, &ec, odd, &oc);

    printf("Chan (%d): ", ec);
    for(int i = 0; i < ec; i++) printf("%d ", even[i]);

    printf("Le (%d): ", oc);
    for(int i = 0; i < oc; i++) printf("%d ", odd[i]);

    return 0;
}