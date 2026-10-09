#include <stdio.h>

int main() {
    int arr[] = {2, 3, 2, 5, 2, 7, 5};
    int n = 7;

    int max_count = 0;
    int element = arr[0];

    for(int i = 0; i < n; i++)
    {
        int da_dem = 0;
        for(int k = 0; k < i; k++)
        {
            if(arr[k] == arr[i]) {
                da_dem = 1; break;
            }
        }
        if(da_dem) continue;

        int count = 1; // tinh luon chinh no
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] == arr[i]) count++;
        }
        if(count  > max_count)
        {
            max_count = count;
            element = arr[i];
        }

    }

    printf("Phan tu %d xuat hien %d lan\n", element, max_count);

    return 0;
}