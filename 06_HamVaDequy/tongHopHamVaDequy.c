#include <stdio.h>

int kiemTraSoNguyenTo(int element)
{
    if(element < 2) return false;
    if(element % 2 == 0) return false;
    for(int i  = 3; i * i <= element; i++)
    {
        if(element % i == 0) return false;
    }
    return true;
}

int daoNguocSo(int element2)
{
    int dao = 0;
    int dieuKien = 0;

    if(element2 < 0)
    {
        dieuKien = 1;
        element2 = -element2;
    }

    while(element2 > 0)
    {
        int digit = element2 % 10; // digit = 4, 3 
        dao = dao * 10 + digit; // 4 , 40+3
        element2 = element2 / 10; // 123 
    }

    return dieuKien ? -dao : dao;
}

int timSoFibo(int element3)
{
    if(element3 <= 1) return element3;
    return timSoFibo(element3 - 1) + timSoFibo(element3 - 2);
}

int timSoFibo2(int x)
{
    int a = 0, b = 1;
    if( x == 0 || x == 1) return x;
    while(b < x)
    {
        int temp = b;
        b = a + b;
        a = temp;
    }
    return b == x;
}

int timKiemNhiPhan(int arr[], int n, int target)
{
    int left = 0, right = n - 1;
    while(left <= right)
    {
        int mid = left + (right - left) / 2;
        if(arr[mid] == target) 
            return mid;
        else if(arr[left] < target)
        {
            left = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }

    return -1;
}

int UCLN(int a, int b)
{
    if(a < 0 || b < 0){
        a = -a;
        b = -b;
    }
    if(a % b == 0 || b % a == 0)
    {
        return 2;
    }
    while(b != 0)
    {
        int temp = b;
        b = a % b; 
        a = temp;
    }
    return a;
    
}

long long BCNN(int a, int b)
{
    int ucln = UCLN(a, b);
    if(ucln == 0) return 0;
    long long tich = (int) a * b;
    
    return tich / ucln;
}
void swap(int *element1, int *element2)
{
    int temp = *element1;
    *element1 = *element2;
    *element2 = temp;
}
void buddleSort(int arr[], int n)
{
    for(int i = 0; i < n -1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1]) 
                swap(&arr[j], &arr[j + 1]);
        }
    }
}
void selectionSort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int min = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
                swap(&arr[j] , &arr[min]);
            }
        }
    }
}

int main(void)
{
    printf("P1: kiem tra so nguyen to\n");
    printf("Day so nguyen to tu 1 - 20: ");
    for(int i = 0; i < 20; i++)
    {
        if(kiemTraSoNguyenTo(i))
        {
            printf("%d ", i);
        }
    }

    printf("\nP2: Dao nguoc so nguyen \n");
    printf("%d\n", daoNguocSo(1234));
    printf("%d\n", daoNguocSo(-654));

    printf("P3: Day so fibonanci \n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", timSoFibo(i));
    }
    printf("\nP4: Tim kiem nhi phan \n");
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("day so: ");
    for(int i = 0; i <n ; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("%d\n",timKiemNhiPhan(arr, n, 38));
    //printf("%d\n",timKiemNhiPhan(arr, n, 55));

    printf("\nP5: UCLN and BCNN: \n");
    printf("%d\n", UCLN(25,35));
    printf("%d\n", BCNN(25,35));

    int a[] = {64, 34, 25, 12, 22};
    int n5 = sizeof(a) / sizeof(a[0]);

    buddleSort(a, n5);
    for(int i = 0; i < n5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    selectionSort(a, n5);
    for(int i = 0; i < n5; i++)
    {
        printf("%d ", a[i]);
    }

    


    return 0;
}