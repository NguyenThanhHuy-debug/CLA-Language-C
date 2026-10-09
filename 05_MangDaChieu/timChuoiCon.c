#include <stdio.h>
#include <string.h>


int main(void)
{
    char van_ban[] ="Hoc lap trinh tai truong";
    char *kq = strstr(van_ban, "trinh");

    if(kq != NULL)
    {
        printf("vi tri: %ld\n", kq);
        printf("Tim thay tai vi tri : %ld]\n", kq - van_ban);
        printf("Phan con lai: %s\n", kq);
    }
    else{
        printf("Khong tim thay\n");
    }

    return 0;
}