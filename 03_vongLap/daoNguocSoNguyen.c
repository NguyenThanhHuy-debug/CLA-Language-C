#include <stdio.h>
#include <limits.h>

int main()
{

    int n, isNegative = 0;
    scanf("%d", &n);
    int reversed = 0;
    // 1234

    if(n < 0)
    {
        isNegative = 1;
        n = -n;
    }
    while(n != 0)
    {
        int temp = n % 10; // temp = 4
        
        if(reversed > (INT_MAX - temp) / 10)
        {
            printf("Tran so\n");
            return 1;
        }
        reversed = reversed * 10 + temp; // 0 *10 + 4 = 4
        n/= 10; // 123
        for(int j = 1; j <= n; j++)
        {
            if()
        }
    }

    if(isNegative)
    {
        reversed = -reversed;
    }

    if(reversed == n)
    {
        printf("Doi Xung\n");
    }
    else {
        printf("Khong doi xung\n");
    }

    printf("%d", reversed);

    return 0;
}