#include <stdio.h>

int daoNguocSo(int num)
{
    int dao = 0;
    int am = 0;

    if(num < 0) {
        am = 1;
        num = -num;
    }

    while(num > 0)
    {
        int digit = num % 10;
        dao = dao * 10 + digit;
        num = num / 10;
    }
    return am ? -dao : dao;
}

int daoDeQuy(int num, int dao)
{
    if(num == 0) return dao;
    return daoDeQuy(num / 10, dao * 10 + num % 10);
}

int daoNguocSo_dequy(int num)
{
    if(num < 0) return -daoDeQuy(-num, 0);
    return daoDeQuy(num, 0);
}

int main(void)
{
     printf("%d\n", daoNguocSo(1234));

     printf("%d\n", daoNguocSo(-654));
     
     printf("%d\n", daoNguocSo(1200));

    return 0;
}