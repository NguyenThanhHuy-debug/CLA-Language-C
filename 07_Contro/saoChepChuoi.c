#include <stdio.h>
#include <String.h> // memcpy

memcpy(dest, src, n * sizeof(int));

void copyString(const char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int* saoChepAnToan(const int *src, int n)
{
    if (src == NULL || n <= 0) return NULL;

    int *dest = (int*)malloc(n * sizeof(int));

    if(dest == NULL) return NULL;
<
    for(int i = 0; i < n; i++)
    {
        dest[i] = src[i];
    }
    return dest;
}


int main(void)
{
    char src[] = "Hello, World";
    char dest[50];

    copyString(src, dest);
    printf("%s\n", dest);

    return 0;
}