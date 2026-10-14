#include <stdio.h>

int timViTriMax(int *a, int n)
{
    int indexMax = 0;

    int max = *a;
    for(int i = 0; i < n; i++)
    {
        if( *(a + i) > max)
        {
            max = *(a + i);
            indexMax = i;
        }
    }

    return indexMax;
}

int timViTriMaxHaiConTro(int *a, int n)
{
    int *end = a +n;

    int max  = *a, index = 0;
    for(int *ptr = a + 1; ptr < end; ptr++)
    {
        if(*ptr > max)
        {
            max = *ptr;
        }
    }

    return max;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // int max = a[0];
    // for(int i = 0; i < n; i++)
    // {
    //     if(a[i] > max) max = a[i];
    // }

    //printf("%d", max);

    int chiSoLonNhat = timViTriMax(a, n);
    printf("%d", a[chiSoLonNhat]);

    return 0;
}