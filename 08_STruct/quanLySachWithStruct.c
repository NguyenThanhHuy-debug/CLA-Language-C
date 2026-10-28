#include <stdio.h>
#define MAX 100


struct book {
    char title[50];
    char author[50];
    float price;
};

struct book b;
strcpy(b.title, "Lap trinh C");
strcpy(b.author, "Nguyen Van A");
b.price = 125000.0f;

struct book b1{"Nha Gia Kim", "Paulo Coelho", 89000.0f};

struct book b2 = {
    .title = "Dac nhan tam",
    .author = "Dale Carnegie",
    .price = 75000.0f
}

struct book b3;
b3 = b1;
b3.price = 99000.0f;


int main(void)
{
    struct book tv[MAX];
    int n = 0;
    tv[n++] = (struct book){"Dac nhan tam", "Dale carnegie", 75000};
    return 0;
}