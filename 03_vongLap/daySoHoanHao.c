#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    

    printf("Cac so hoan hao tu 1 den %d:\n", n);

    for(int sum = 1; sum <= n; sum++)
    {
        int tongTamThoi = 0;
        
        for(int uoc = 1; uoc < sum; uoc++)
        {
            if(sum % uoc == 0)
            {
                tongTamThoi += uoc; //1
            }
        }

        if(tongTamThoi == sum) 
            printf("%d ", sum);
    }
    return 0;
}