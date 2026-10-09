#include <stdio.h>

int main()
{

    int arr[] ={2, 3, 2, 5, 2, 7, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int max_count = 0; // so lan xuat hien nhieu nhat tim duoc

    int element = arr[0]; // Phan tu dang giu ky luc

    for(int i = 0; i < n; i++)
    {
        int count = 0;
        for(int j = 0; j < n; j++)
        {
            if(arr[j] == arr[i])
                count++;
        }

        if(count  > max_count)
    {
        max_count = count;
        element = arr[i];
    }
}

    printf("Phan tu xuat hien nhieu nhat: %d\n", element);
    printf("So lan xuat hien: %d\n", max_count);
    

    return 0;
}