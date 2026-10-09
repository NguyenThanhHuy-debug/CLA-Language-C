#include <stdio.h>

int main(void)
{
    float weight, height, bmi;

    int num_people;
    printf("Nhap so nguoi can tinh BMI: ");
    if(scanf("%d", &num_people) != 1)
    {
        printf("Loi: ban phai nhap mot so nguyen.\n");
        return 1; // Exit with error code
    }
    for(int i = 1; i <= num_people; i++)
    {
        printf("Nhap can nang nguoi thu %d: ", i);
        if(scanf("%f", &weight) != 1)
        {
            printf("Loi: ban phai nhap mot so thuc.\n");
            return 1; // Exit with error code
        }
        printf("Nhap chieu cao nguoi thu %d: ", i);
        if(scanf("%f", &height) != 1)
        {
            printf("Loi: ban phai nhap mot so thuc.\n");
            return 1; // Exit with error code
        }

        bmi = weight / ( height * height);
        if(bmi < 18.5)
        {
            printf("Nguoi thu %d: BMI = %.2f, Ban thieu can.\n", i, bmi);
        }
        else if(bmi >= 18.5 && bmi < 25)
        {
            printf("Nguoi thu %d: BMI = %.2f, Ban binh thuong.\n", i, bmi);
        }
        else if(bmi >= 25 && bmi < 30)
        {
            printf("Nguoi thu %d: BMI = %.2f, Ban thua can.\n", i, bmi);
        }
        else
        {
            printf("Nguoi thu %d: BMI = %.2f, Ban beo phi.\n", i, bmi);
        }
    }
    // bmi = weight / (height * height);
    // printf("Chi so BMI cua ban la: %.2f\n", bmi);

    return 0;
}