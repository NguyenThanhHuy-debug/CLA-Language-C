#include <stdio.h>

int main(void)
{
    // int a, b, c, max; // 9  3  6
    // scanf("%d %d %d", &a, &b, &c);

    // if(a > b)
    // {
    //     if(a > c)
    //     {
    //         max = a;
    //     }else{
    //         max = c;
    //     }
    // }else{
    //     if(b  > c)
    //     {
    //         max = b;
    //     }else{
    //         max = c;
    //     }
    // }

    // max = a;
    // if(b > max)
    // {
    //     max = b;
    // }
    // if(c > max)
    // {
    //     max = c;
    // }

    // if( a >= b & a >= c)
    // {
    //     max = a;
    // }
    // else if(b >= a && b >= c)
    // {
    //     max = b
    // }else{
    //     max = c;
    // }

    //max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    // int arr[] ={12, 45,7, 23, 45, 3};
    // int n = 6; max = arr[0];
    // for(int i = 1; i < n; i++)
    // {
    //     if(arr[i] > max) max = arr[i];
    // }

    int soThuNhat, soThuHai, soThuBa, min;
    scanf("%d %d %d", &soThuNhat, &soThuHai, &soThuBa);
    //printf("So lon nhat la: %d\n", (soThuNhat > soThuHai) ? soThuNhat : soThuHai);
    // min = soThuNhat;
    // if(soThuHai <= min) min = soThuHai;
    // if(soThuBa <= min) min = soThuBa;
    // printf("So nho nhat la: %d\n", min);

    min = (soThuNhat < soThuHai) ? ((soThuHai < soThuBa)? soThuHai : soThuBa) : ((soThuHai < soThuBa) ? soThuHai : soThuBa);
    int max = (soThuNhat > soThuHai) ? ((soThuNhat > soThuBa) ? soThuNhat : soThuBa) : ((soThuHai > soThuBa) ? soThuHai : soThuBa);
    
    if(min != max)
    {
        printf("So nho nhat la: %d\n", min);
        printf("So lon nhat la: %d\n", max);
    }else{
        printf("So lon nhat va so nho nhat la: %d\n", max);
    }
    
    // int soGiua = (soThuNhat + soThuHai + soThuBa) - max - min;
    // if(soGiua != max && soGiua != min)
    // {
    //     printf("So giua la: %d\n", soGiua);
    // }else{
    //     printf("Khong co so giua\n");
    // }

    int temp = 0;
    if(soThuNhat != min && soThuNhat != max)
    {
        printf("So giua la: %d\n", soThuNhat);
        temp = soThuNhat;
    }else if(soThuHai != min && soThuHai != max)
    {
        printf("So giua la: %d\n", soThuHai);
        temp = soThuHai;
    }else{
        printf("Khong co so giua\n");
    }

    printf("tang dan %d %d %d\n",min,temp,max);
    return 0;
}