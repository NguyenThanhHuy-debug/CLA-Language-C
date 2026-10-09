//1 Tim phan tu lon nhat/ nho nhat
//2 Tinh tong/ trung binh mang
//3 Dao nguoc mang
//4 Sap xep mang tang dan
//5 Tim kiem phan tu
//6 Dem so phan tu chan/le
//7 Tach mang chan/le
//8 Gop hai mang
//9 Xoa phan tu khoi mang
//10 tim phan tu xuat hien nhieu lam

#include <stdio.h>

void printArray(int arr[], int n);
void printSoLanXuatHienNhieu(int element,int max_count);
void funcDemSoPhanTuXuatHienNhieuLan(int arr[],int n);
void deleteAtPositon(int arr[], int *n, int pos);
void printDelete_9(int arr[], int *n);
void mergeArray(int arr1[], int arr2[], int size1, int size2, int res[]);
void printMerge_8(int res[], int n);
void tachMangChanLe(int arr_7[], int even[], int odd[], int *evenCount, int *oddCount, int size_arr_7);
void printSplitArray_7(int even[], int odd[], int ec, int oc);
int timKiemTuyenTinh(int arr_5[], int n_5, int so);
void printSearch_5(int saveOn, int So);
void xapSepMangTangDan(int arr_4[], int n_4);
void printXapSep_4(int arr_4[], int n);
void reverseArray(int arr_3[], int n_3);
void printReverseArray(int arr_3[], int n_3);
void showMenu();
//void deleteByValue();


void showMenu()
{
    printf("\n========== MENU ==========\n");
    printf("1. Tim phan tu lon nhat/nho nhat\n");
    printf("2. Tinh tong/trung binh\n");
    printf("3. Dao nguoc mang\n");
    printf("4. Sap xep tang dan\n");
    printf("5. Tim kiem phan tu\n");
    printf("6. Dem so chan/le\n");
    printf("7. Tach mang chan/le\n");
    printf("8. Gop hai mang\n");
    printf("9. Xoa phan tu\n");
    printf("10. Tim phan tu xuat hien nhieu nhat\n");
    printf("0. Thoat\n");
    printf("==========================\n");
}

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]); 
    }
    printf("\n");
}

//------------------------------10------------------------------//
void funcDemSoPhanTuXuatHienNhieuLan(int arr[], int n_10){

    if(n_10 <= 0) return;
    int max_count_10 = 0;
    int element_10 = arr[0];
    for(int i = 0; i < n_10; i++)
    {
        int count = 0;
        for(int j = 0; j < n_10; j++)
        {
            if(arr[i] == arr[j]) count++;
        }
        if(count > max_count_10)
        {
            max_count_10 = count;
            element_10 = arr[i];
        }
    }
    printSoLanXuatHienNhieu(element_10, max_count_10);
}

void printSoLanXuatHienNhieu(int element, int max_count)
{
    printf("---------------------------------\n");
    printf("10. Phan tu xuat hien nhieu nhat\n");
    printf("Phan tu xuat hien nhieu nhat: %d\n", element);
    printf("So lan xuat hien: %d\n", max_count);
    printf("----------------------------------\n");
    printf("\n");
}

//----------------------10 -end--------------------------------//

//-------------------------9----------------------------------------//

void deleteAtPositon(int arr[], int *n, int pos)
{
    if((*n) <= 0 || pos < 0 || pos > (*n)) return;
    for(int i = pos; i < (*n) - 1; i++)
    {
        arr[pos] = arr[i+1];
    }
    (*n)--;
   printDelete_9(arr, n);
}

void printDelete_9(int arr[], int *n)
{
    printf("---------------------------------\n");
    printf("9. Xoa phan tu trong mang\n");
    printf("Mang sau khi xoa: \n");
    for(int i = 0; i < (*n); i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("----------------------------------\n");
    printf("\n");
}
//--------------------------9 - end----------------------------------//

//-------------------------8----------------------------------------//

void mergeArray(int arr1[], int arr2[], int size1, int size2, int res[])
{
        for(int i = 0; i < size1; i++)
        {
            res[i] = arr1[i];
        }
        for(int j = 0; j < size2; j++)
        {
            res[size1 + j] = arr2[j];
        }

    printMerge_8(res, size1+size2);
}

void printMerge_8(int res[], int n)
{
    printf("---------------------------------\n");
    printf("8. Gop mang\n");
    printf("Mang sau khi gop: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ",res[i]);
    }
    printf("\n");
    printf("----------------------------------\n");
    printf("\n");
}
//--------------------------8 - end----------------------------------//



//---------------------------7--------------------------------------//

void tachMangChanLe(int arr_7[], int even[], int odd[], int *evenCount, int *oddCount, int size_arr_7)
{
    for(int i = 0; i < size_arr_7; i++)
    {
        if(arr_7[i] % 2 == 0) 
        {
            even[*evenCount] = arr_7[i];
            (*evenCount)++;
        }else{
            odd[*oddCount] = arr_7[i];
            (*oddCount)++;
        }
    }
    printSplitArray_7(even, odd, *evenCount, *oddCount);
}

void printSplitArray_7(int even[], int odd[], int ec, int oc)
{
    printf("---------------------------------\n");
    printf("7. Tach mang \n");
    printf("Mang le la: \n");
    for(int i = 0; i < ec; i++)
    {
        printf("%d ",even[i]);
    }
    printf("\n");
    
    printf("Mang chan la: \n");
    for(int i = 0; i < oc; i++)
    {
        printf("%d ",odd[i]);
    }
    printf("\n");
    printf("----------------------------------\n");
    printf("\n");
}
//--------------------------7 - end----------------------------------//

//---------------------------6--------------------------------------//
int timKiemTuyenTinh(int arr_5[], int n_5, int so)
{
    int low = 0, high = n_5 -1;
    int saveOn = 0;
    while(low <= high)
    {
        int mid = low + (high-low)/2;

        if(arr_5[mid] == so)
        {
            saveOn = 1;
            break;
        }
        else if(arr_5[mid] < so)
        {
            low = mid + 1;
        }
        else{
            high = mid -1;
        }
    }
    printSearch_5(saveOn, so);
}

void printSearch_5(int saveOn, int So)
{
    printf("---------------------------------\n");
    printf("5. Tim kiem phan tu \n");
    printf("Tim kiem phan tu gia tri: %d \n", So);
    printf("SAve On: %d\n", saveOn);
    if(saveOn)
    printf("YES\n");
    else printf("NO\n");
    printf("----------------------------------\n");
    printf("\n");
}
//--------------------------6 - end----------------------------------//


//---------------------------4--------------------------------------//
void xapSepMangTangDan(int arr_4[], int n_4)
{
    for(int i = 0; i < n_4; i++)
    {
        for(int j = i+1; j < n_4; j++)
        {
            if(arr_4[j] < arr_4[i])
            {
                int temp = arr_4[j];
                arr_4[j] = arr_4[i];
                arr_4[i] = temp;
            }          
        }
    }

    printXapSep_4(arr_4, n_4);
}

void printXapSep_4(int arr_4[], int n_4)
{
    printf("---------------------------------\n");
    printf("4. Xap sep mang tang dan \n");
    for(int i = 0; i < n_4; i++)
    {
        printf("%d ", arr_4[i]);
    }
    printf("\n");
    printf("----------------------------------\n");
    printf("\n");
}
//--------------------------4 - end----------------------------------//

//---------------------------3--------------------------------------//
void reverseArray(int arr_3[], int n_3)
{
    int i = 0;
    int j = n_3 -1;
    while(i < j)
    {
        int temp = arr_3[i];
        arr_3[i] = arr_3[j];
        arr_3[j] = temp;
        i++;
        j--;
    }
    printReverseArray(arr_3, n_3);
}

void printReverseArray(int arr_3[], int n_3)
{
    printf("---------------------------------\n");
    printf("3. Dao nguoc mang \n");
    for(int i = 0; i < n_3; i++)
    {
        printf("%d ", arr_3[i]);
    }
    printf("\n");
    printf("----------------------------------\n");
    printf("\n");
}
//--------------------------3 - end----------------------------------//


int main()
{
    int arr[] = {2, 2, 3, 5, 9, 11, 34, 77, 9};
    int n_10 = 9;
    int n_9 = 9;
    int arr1[] = {2, 5, 7, 8, 9, 10};
    int arr2[] = {1, 8, 9};
    int n_8 = sizeof(arr1)/sizeof(arr1[0]);
    int m_8 = sizeof(arr2)/sizeof(arr2[0]);
    int res[n_8+m_8];

    int arr_7[] = {1, 3, 4, 6, 7, 8, 9};
    int even[10], odd[10], evenCount = 0, oddCount = 0;
    int size_arr_7 = sizeof(arr_7) / sizeof(arr_7[0]);

    int arr_5[] ={23, 45, 0, 7, 89, 56};
    int n_5 = sizeof(arr_5) / sizeof(arr_5[0]);
    int soCanTimKiem = 33;

    int arr_4[] ={64, 34, 25, 12, 22, 11, 90};
    int n_4 = sizeof(arr_4) / sizeof(arr_4[0]);

    int arr_3[] = {10, 20, 30, 40, 50};
    int n_3 = sizeof(arr_3)/sizeof(arr_3[0]);

    // int choice;

    // do{
    //     showMenu();
    //     printf("\n");
    //     printf("Nhap lua chon: \n");
    //     if(scanf("%d", &choice) != 1)
    //     {
    //         printf("Nhap so nguyen duong tu 1-10: ");
    //         return 1;
    //     }
    //     switch(choice)
    //     {
    //         case 1: 
    //     }

    // }while(choice != 0)
    funcDemSoPhanTuXuatHienNhieuLan(arr, n_10);
    deleteAtPositon(arr, &n_9, 2); // delete a[2] = 3
    mergeArray(arr1, arr2, n_8, m_8, res);
    tachMangChanLe(arr_7, even, odd, &evenCount, &oddCount, size_arr_7);
    timKiemTuyenTinh(arr_5, n_5, soCanTimKiem);
    xapSepMangTangDan(arr_4, n_4);
    reverseArray(arr_3, n_3);

    return 0;

}