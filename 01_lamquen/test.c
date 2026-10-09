#include <stdio.h>

int main() {
    int num1 = 0, num2 = 0; // may tinh xin hdh o no 4 byte trong RAM

    printf("Nhap so thu nhat: ");
    if(scanf("%d", &num1) != 1){   // & địa chỉ của ô nhớ đó vd 0x7ffee3b0
        printf("Loi: ban phai nhap mot so nguyen.\n");
        return 1; // Exit with error code
    }

    printf("Nhap so thu hai: ");
    if(scanf("%d", &num2) != 1){
        printf("Loi: ban phai nhap mot so nguyen.\n");
        return 1; // Exit with error code
    }

    float tb = (num1 + num2)/ 2.0;

    printf("Tong cua %d va %d la: %d\n", num1, num2, num1 + num2);
    printf("Trung binh cua %d va %d la: %.2f\n", num1, num2, tb);
    return 0;
}