// Viết chương trình đọc hai số nguyên từ đầu vào, hoán đổi giá trị của chúng bằng cách sử dụng con trỏ, và in ra kết quả sau khi hoán đổi.
// Đầu vào:

// Hai số nguyên a và b, mỗi số trên một dòng.
// Đầu ra:

// In ra hai số a và b sau khi hoán đổi, cách nhau bởi dấu cách.
// Ví dụ:
// Đầu vào:
// 5
// 10

// Đầu ra:
// 10 5

#include <stdio.h>

void swapFloat(int *a, int *b) 
{
    int t = *a;
    *a = *b;
    *b = t;
}



int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    swapFloat(&a, &b);

    printf("%d %d", a, b);

    return 0;
}