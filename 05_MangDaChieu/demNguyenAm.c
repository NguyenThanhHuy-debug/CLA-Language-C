// #include <stdio.h>

// int main()
// {
//     char str[100]= "";
    
//     printf("Nhap mot chuoi: ");
//     fgets(str, sizeof(str), stdin);

//     // FILE *fp;
//     // char str[60];

//     // fp = fopen("baitapc.txt","r");
//     // if(fp ==  NULL)
//     // {
//     //     return 1;
//     // }
//     // if(gets(str, 60, fp) != NULL)
//     // {
//     //     puts{str};
//     // }
//     // fclose{fp};


    
//     // printf("Ky tu dau: %c\n", str[0]);
//     // printf("Ky tu chuoi that su: %d\n", str[2]);
//     // printf("Ky tu chuoi that su: %c\n", str[3]);
//     // printf("Ky tu chuoi that su: %c\n", str[1]);

//     return 0;
// }


#include <stdio.h>
#include <ctype.h> // isalpha: check chu cai hk. tolower: A -> "a"

bool 
int main(){
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Nhap mot chuoi: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(isalpha(str[i]))
        {
            char ch = tolower(str[i]);

            if(ch == 'a' || ch == 'e' || ch == 'u' || ch == 'i' ||
                ch == 'o')
            {
                vowels++;
            }else 
                consonants++;
        }
    }

    printf("So nguyen am: %d\n", vowels);
    printf("So phu am: %d\n",consonants);
    return 0;

}