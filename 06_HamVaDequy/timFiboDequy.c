#include <stdio.h>
#define MAX 100

long long memo[MAX];

void khoiTao(void)
{
    for(int i = 0; i < MAX; i++)
        memo[i] = -1;
}

long long fibMemo(int n)
{
    if(n <= 1) return n;
    if(memo[n] != -1) return memo[n];

    memo[n] = fibMemo(n - 1) + fibMemo(n - 2);

    return memo[n];
}

int fibonaci(int n)
{
    if(n <= 1) return n;
    return fibonaci(n - 1) + fibonaci(n - 2);
}

int laFibonaci(int x)
{
    int a = 0, b = 1;
    if(x == 0 || x == 1) return 1;
    while(b < x)
    {
        int t = b;
        b = a + b;
        a = t;
    }
    return b == x;
}

int main(void)
{

    // for(int i = 0; i < 10; i++)
    // {
    //     printf("%d ", fibonaci(i));
    // }

    khoiTao();
    printf("F(50) = %lld\n", fibMemo(50));

    return 0;
}