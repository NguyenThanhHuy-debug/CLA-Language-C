#include <stdio.h>

int main(void)
{
    float soThuNhat, soThuHai, soThuBa;
    char phepToan;
    double ketQua;

    printf("Nhap so thu nhat: ");
    if(scanf("%f", &soThuNhat) != 1)
    {
        printf("Loi nhap du lieu!\n");
        return 1;
    }
    printf("Nhap so thu hai: ");
    if(scanf("%f", &soThuHai) != 1)
    {
        printf("Loi nhap du lieu!\n");
        return 1;
    }
    printf("Nhap so thu ba: ");
    if(scanf("%f", &soThuBa) != 1)
    {
        printf("Loi nhap du lieu!\n");
        return 1;
    }
    printf("Nhap phep toan (+, -, *, /): ");
    if(scanf(" %c", &phepToan) != 1)
    {
        printf("Loi nhap du lieu!\n");
        return 1;
    }

    switch(phepToan)
    {
        case '+':
        ketQua = soThuNhat + soThuHai;
        printf("Ket qua: %.2f\n", ketQua);
            break;

        case '-':
        ketQua = soThuNhat - soThuHai;
        printf("Ket qua: %.2f - %.2f = %.2f\n", soThuNhat, soThuHai, ketQua);
            break;
        
        case '*':
        ketQua = soThuNhat * soThuHai;
        printf("Ket qua: %.2f * %.2f = %.2f\n", soThuNhat, soThuHai, ketQua);
            break;

        case '/':
            if(soThuHai != 0)
            {
                ketQua = soThuNhat / soThuHai;
                printf("Ket qua: %.2f / %.2f = %.2f\n", soThuNhat, soThuHai, ketQua);
            }
            else
            {
                printf("Loi: Khong the chia cho 0!\n");
            }
            break;
        
        default:
            printf("Loi nhap du lieu!\n");
            return 1;
    }
    return 0;
}
