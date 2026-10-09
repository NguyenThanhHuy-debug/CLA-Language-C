#include <stdio.h>

#define SECONDS_IN_HOUR 3600
#define SECONDS_IN_MINUTE 60

int main(void)
{
    int total_seconds;

    printf(" Nhap so giay can chuyen doi: ");
    scanf("%d", &total_seconds);

    int hours = total_seconds / 3600;
    int remaining  = total_seconds % 3600;
    int minutes = remaining / 60;
    int seconds = total_seconds % 60;

    printf("%d giay = %d gio, %d phut, %d giay\n", total_seconds, hours, minutes, seconds);

    printf("Dinh dang: %02d:%02d:%02d\n", hours, minutes, seconds);
    return 0;
}