#include <stdio.h>
#include <string.h>

void reverseBasic(char str[]){
    int start = 0;
    int end = strlen(str) - 1;
    
    while(start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end]  = temp;
        start++;
        end--;
    }

}

void reversePointer(char *str)
{
    if(str == NULL) return;

    char *start = str;
    char *end = str + strlen(str) - 1;
    
    while(start < end)
    {
        char temp = *start;
        *start    = *end;
        *end      = temp;
        start++;
        end--;
    }
}

void reverseRevursive(char str[], int start, int end)
{
    if(start >= end) return;

    char temp  = str[start];
    str[start] = str[end];
    str[end]   = temp;

    reverseRevursive(str, start + 1, end - 1);
}

int main(void)
{
    char text[] = "Hello World";
    printf("Truoc: %s\n", text);
    reverseBasic(text);
    printf("Sau: %s\n", text);
    
    printf("////////////////////////\n");
    char text1[] = "Pointer";
    reversePointer(text1);
    printf("Sau: %s\n", text1);

    printf("///////////////////////\n");
    char text3[] = "Recursion";
    reverseRevursive(text3, 0, strlen(text3) - 1);
    printf("De quy: %s\n", text3);
    
    return 0;
}