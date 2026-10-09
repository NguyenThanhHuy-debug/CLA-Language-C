#include <stdio.h>
#include <ctype.h>  // cho isspace()

int demTu(const char *str)
{
    int dem = 0;
    int trong_tu = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(!isspace(str[i]))
        {
            if(!trong_tu)
            {
                dem++;
                trong_tu = 1;
            }
        }
        else{
            trong_tu = 0;
        }
    }

    return dem;
}

int demTu2(const char *str)
{
    int dem = 0, trong_tu = 0;
    for(int i  = 0; str[i] != '\0'; i++)
    {
        if(!isspace(str[i]))
        {
            if(!trong_tu) {
                dem++;
                trong_tu = 1;
            }
        }
        else{
            trong_tu = 0;
        }
    }
    return dem;
}

int main(void)
{
    printf("%d\n", demTu("Hoc lap trinh C"));
    
    printf("%d\n", demTu("Hello   world"));

    printf("%d\n", demTu("    xin   chao     "));

    char chuoi[200];
    printf("Nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    chuoi[strcspn(chuoi, "\n")] = '\0';

    printf("Chuoi: \"%s\"\n", chuoi);
    printf("So tu: %d\n", demTu2(chuoi));

    return 0;
}