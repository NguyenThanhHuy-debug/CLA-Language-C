#include<stdio.h>
int main(){
    // int celsius;
    // printf(" Nhap nhiet do C: ");
    // scanf("%d", &celsius);

    // float fahrenheit = celsius * 9.0 / 5.0 + 32;
    
    
    // printf(" Nhiet do F: %.1f\n", fahrenheit);
    
    for(int c = -10; c <= 40 ; c+=5)
    {
        float f = c * 9.0 / 5.0 + 32;
        printf("%d C = %.1f F\n", c, f);;
    }
    return 0;
}