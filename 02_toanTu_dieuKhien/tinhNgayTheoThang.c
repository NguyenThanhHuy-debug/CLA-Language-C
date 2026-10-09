#include <stdio.h>

int so_ngay_trong_thang(int thang, int nam)
{
    int temp_funv;
    switch(thang)
    {
        case 1: case 3: case 5:
        case 7: case 8: case 10: case 12:
            
        temp_funv = 31;
            
            break;
        
        case 4: case 6: case 9: case 11:
            
        temp_funv = 30;

            break;
        case 2:
            if((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
                temp_funv = 29;
            else 
            temp_funv = 28;
            break;
        default:
            printf("Loi nhap du lieu!\n");
            return 1;
    }
    return temp_funv;
}

int la_nam_nhuan(int nam)
{
    if((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
        return 1;
    else 
        return 0;
}
int main(void)
{
    int thang, nam, temp, temp_nam;
    printf("Nhap thang: ");
    if(scanf("%d", &thang) != 1 || thang < 1 || thang > 12)
    {
        printf("Loi nhap du lieu!\n");
        return 1;
    }
    printf("Nhap nam: ");
    if(scanf("%d", &nam) != 1 || nam < 0)
    {
        printf("Loi nhap du lieu!\n");
        return 1;
    }
    // switch(so)
    // {
    //     case 1:
    //         printf("Thu Hai\n");
    //         break;
    //     case 2:
    //         printf("Thu Ba\n");
    //         break;
    //     case 3:
    //         printf("Thu Tu\n");
    //         break;
    //     case 4:
    //         printf("Thu Nam\n");
    //         break;
    //     case 5:
    //         printf("Thu Sau\n");
    //         break;
    //     case 6:
    //         printf("Thu Bay\n");
    //         break;
    //     case 7:
    //         printf("Chu Nhat\n");
    //         break;
    //     default:
    //         printf("Loi nhap du lieu!\n");
    //         return 1;
    // }



    temp = so_ngay_trong_thang(thang, nam);
    temp_nam = la_nam_nhuan(nam);
    printf("Thang %d nam %d co %d ngay\n", thang, temp_nam, temp);
    if(temp_nam)
        printf("Nam %d la nam nhuan\n", nam);
    else
        printf("Nam %d khong phai la nam nhuan\n", nam);
    return 0;
}