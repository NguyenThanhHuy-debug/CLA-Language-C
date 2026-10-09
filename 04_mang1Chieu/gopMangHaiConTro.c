#include <stdio.h>

void mergeSorted(int a[], int n, int b[], int m, int result[])
{
    int i = 0, j = 0, k = 0;

    while(i < n && j < m)
    {
        if(a[i] <= b[j])
            result[k++] = a[i++];
        else
            result[k++] = b[j++];
    }

    while(i < n) result[k++] = a[i++];

    while(j < m) result[k++] = b[j++];
}

int main()
{
    int a[] = {1, 2, 3, 5, 7};
    int b[] = {2, 4, 6, 8, 9};
    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);

    int *resultM = malloc((n + m) * sizeof(int));
    if(resultM == NULL)
    {
        printf("Khong du bo nho!\n");
        return 1;
    }
    int result[n + m];
    mergeSorted(a, n, b, m, result);

    printf("Gop sap xep: ");
    for(int k = 0; k < n + m; k++) 
        printf("%d ",result[k]);
    printf("\n");

    free(resultM);
    return 0;

}