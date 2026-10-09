#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool isVowel(char c)
{
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void countLetters(const char str[], int *vowels, int *consonants)
{
    *vowels = 0;
    *consonants = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(isalpha(str[i]))
        {
            if(isVowel(str[i]) == 1) (*vowels)++;
            else                    (*consonants)++;
        }
    }
}

int BT1_tongSoNguyenAmPhuAm(const char str[], int *sum)
{
    // /(*sum) = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(isalpha(str[i]))
        {
            (*sum)++;
        }
    }
    return *sum;
}


// In nguyen am, phu am, chu so, so khoang trang
int BT2_demChuSoVaKhoangTrang(const char str[], int *demchuCaiVaKhoangTrang)
{
    (*demchuCaiVaKhoangTrang) = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(isdigit(str[i]) || isspace(str[i]))
        {
            (*demchuCaiVaKhoangTrang)++;
        }
    }
    return BT1_tongSoNguyenAmPhuAm(str,demchuCaiVaKhoangTrang);
}


int main()
{
    char str[100];
    int v, c;
    printf("Nhap chuoiL: ");
    fgets(str, sizeof(str), stdin);

    countLetters(str, &v, &c);

    printf("Nguyen am: %d | Phu am: %d\n",v,c);

    //////////////////BT1/////////////////////
    int tongSo = 0;
    int ketQua = BT1_tongSoNguyenAmPhuAm(str, &tongSo);
    printf("----Bai tap so 1-----\n");
    printf("tong so chu cai: %d\n", ketQua);

    /////////////////BT2/////////////////////
    int demchuCaiVaKhoangTrang = 0;
    demchuCaiVaKhoangTrang = BT2_demChuSoVaKhoangTrang(str, &demchuCaiVaKhoangTrang);
    printf("----Bai tap so 2-----\n");
    printf("tong so nguyen am, phu am, chu so, khoang trang: %d\n", demchuCaiVaKhoangTrang);

    ////////////////BT3/////////////////////
    int count[5]={};
    int demTanSuatTungNguyenAm(str, )
    return 0;
}