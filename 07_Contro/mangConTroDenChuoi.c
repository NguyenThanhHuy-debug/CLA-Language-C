#include <stdio.h>
#include<string.h>

void timChuoi(char *arr[], int n; const char *canTim)
{
    for(int i = 0; i < n; i++)
    {
        if(strcmp(arr[i], canTim) == 0) return i;
    }
    return -1;
}


int main(void)
{
    char *name[] = {"An", "Binh", "Chi", "Dung", "Em"};
    int n = 5;
    for(int i = 0; i < n; i++)
    {
        printf("%d. %s\n", i + 1, name[i]);
    }

    // Cach 1: Khai bao  + khoi tao truc tiep
    char *fruit[] ={"Tao", "Cam", "Chuoi"};

    // Cach 2: khai bao truoc, gan sau
    char *colors[3];
    colors[0] = "Do", colors[1] = "Xanh", colors[2] ="Vang";

    //Cach 3: kich thuoc co dinh
    char *delay[7] = {"T2","T3","T4","T5","T6","T7","CN"};

    char *names[] ={ "Binh", "An", " Dung", "Chi"};
    int n1 = 4;

    for(int i = 0; i < n1 - 1; i++)
    {
        for(int j = 0; j < n1 - 1 - i; j++)
        {
            if(strcmp(names[j], names[j+1]) > 0){
                char *temp = names[j];

                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < n1 ; i++) printf("%s ", names[i]);

    return 0;

}