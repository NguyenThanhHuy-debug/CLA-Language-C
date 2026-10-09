#include <stdio.h>

int main()
{
    int n,i;
    int isPrime = 1; // Giả sử n là số nguyên tố
    
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    if(n < 2)
    {
        isPrime = 0; // Số nhỏ hơn 2 không phải là số nguyên tố
    }
    else{
        for(i = 2; i < n; i++)
        {
            if(n % i == 0)
            {
                isPrime = 0; // Nếu n chia hết cho i, n không phải là số nguyên tố
                break;
            }
        }
    }

    if(isPrime)
    {
        printf("%d la so nguyen to", n);
    }
    else
    {
        printf("%d khong phai la so nguyen to", n);
    }
    return 0;
}