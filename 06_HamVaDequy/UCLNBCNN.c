#include <stdio.h>

int timUCLN(int a, int b)
{
    if(a < 0) a = -a;
    if(b < 0) b = -b;

    if(a % b == 0) return 2;
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp; 
    }

    return a;
}

int timUCLN_dequy(int a, int b)
{
    if(a < 0) a = -a;
    if(b < 0) b = -b;
    if( b == 0) return a;
    if(a % b == 0) return 2;
    return timUCLN_dequy(b, a % b);

}

long long timBCNN(int a, int b)
{
    int ucln = timUCLN(a, b);
    if(ucln == 0) return 0;

    long long tich = (long long)a * b;

    if(tich  < 0) tich = -tich;
    
    return tich / ucln;
}
int main(void)
{
    int a, b;
    if(scanf("%d%d", &a, &b) != 2)
    {
        return 1;
    }

    printf("UCLN(%d, %d) = %d\n", a, b, timUCLN(a,b));

    printf("De quy UCLN(%d, %d) = %d\n", a, b, timUCLN_dequy(a,b));
    
    return 0;
}