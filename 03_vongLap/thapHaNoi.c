#include <stdio.h>

int main()
{
    int n = 4;

    long long luyThua = 1;

    for(int  i = 0; i < n; i++)
    {
        luyThua = luyThua * 2;
    }

    long long soBuoc = luyThua -1; // 2* n -1
    printf("Voi %d dia, so buoc toi thieu = %lld\n", n, soBuoc);

    return 0;
}