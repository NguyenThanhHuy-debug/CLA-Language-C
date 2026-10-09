#include <stdio.h>

#define MAX 100

int main()
{
    int arr[MAX], even[MAX], odd[MAX];
    int n, i;

    int evenCount =0 , oddCount = 0;

    printf("Nhap so phan tu: ");
    if(scanf("%d", &n) != 1)
    {
        return 1;
    }
    if(n <= 0 || n > MAX)
    {
        return 1;
    }
    printf("Nhap %d phan tu:\n", n);
    for(int i = 0; i < n ; i++)
    {
        printf("arr[%d]",i);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even[evenCount] = arr[i];
            evenCount++;
        }else{
            odd[oddCount] = arr[i];
            oddCount++;
        }
            
    }

    printf("\nMang so chan (%d phan tu): ", evenCount);
    for(int i = 0; i < evenCount; i++) printf("%d ", even[i]);

    printf("\nMang so le (%d phan tu): ", oddCount);
    for(int i = 0; i < oddCount; i++) printf("%d ", odd[i]);
    

    return 0;
}
