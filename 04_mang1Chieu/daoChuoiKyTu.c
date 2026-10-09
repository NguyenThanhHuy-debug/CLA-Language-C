#include <stdio.h>
#include <string.h>

void reverse_ptr(char s[])
{
    int i =0;
    int j = strlen(s) - 1;

    while(i < j)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        i++;
        j--;
    }
}

void delete_DauPhay(char s[])
{
    int i = 0;
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] == ',')
        {
            s[i] = '\0';
        }
    }
}

void remove_char(char s[], char target)
{
    int read = 0;
    int write = 0;

    while(s[read] != '\0') // chay den ky tu cuoi cung
    {
        if(s[read] != target)
        {
            s[write] = s[read];
            write++;
        }
        read++;
    }
    s[write] ='\0';
}
int main(void)
{

    char s[] = "H,C,M,U,T,E";

    reverse_ptr(s);

    printf("%s\n", s);
    //delete_DauPhay(s);
    //printf("%s\n", s);
    remove_char(s, ',')  //or remove_char(s, '\r'); or remove_char(s, '\n');
    
    printf("%s\n", s);

    printf("%d\n", strlen(s));

    return 0;
}