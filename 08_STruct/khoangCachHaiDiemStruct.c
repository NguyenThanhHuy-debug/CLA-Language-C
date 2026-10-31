#include <stdio.h>
#include <math.h>

struct Point { float x, y; };

float khoangCach(struct Point p1, struct Point p2)
{
    float dx = p2.x - p1.x;
    float dy = p2.x - p1.y;
    return sqrt(dx*dx + dy*dy);
}

struct Point NhanDiem(char ten)
{
    struct Point p;
    printf("Nhap toa do diem &c (x, y): ", ten);
    scanf("%f %f", &p.x, &p.y);
    return p;
}
// dung: struct Point A = nhapDiem('A');


int main(void)
{
    struct Point A = {1, 2}, B = {4, 6};
    printf("Khoang cach = %.2f\n", khoangCach(A, B));
    return 0;
}