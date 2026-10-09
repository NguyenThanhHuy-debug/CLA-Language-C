#include <stdio.h>
#include <string.h>

int isPalindromeBasic(char str[])
{
    int left= 0;
    int right = strlen(str) - 1;

    while(left < right)
    {
        if(str[left] != str[right])
        {
            return 0;
        }
        left++;
        right--;
    }

    return 1;
}

int isPalindromeUsingReverse(char str[])
{
    char reversed[100];
    strcpy(reversed, str);

    int n = strlen(reversed);
    for(int i = 0; i < n / 2; i++)
    {
        char tmp = reversed[i];
        reversed[i] = reversed[n - 1 - i];
        reversed[n - 1 - i] = tmp;
    }

    return strcmp(str, reversed) == 0;
}

int isPalindromeSmart(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        /* Nhay qua ky tu khong phai chu/so o ben trai */
        while (left < right && !isalnum(str[left]))  left++;
        /* Nhay qua ky tu khong phai chu/so o ben phai */
        while (left < right && !isalnum(str[right])) right--;

        if (tolower(str[left]) != tolower(str[right]))
            return 0;
        left++;
        right--;
    }
    return 1;
}


int main(void)
{
    char a[] = "radar";
    char b[] = "hello";

    printf("%s -> %s\n", a, isPalindromeBasic(a) ? "Palindrome" : "no" );
    printf("%s -> %s\n", b, isPalindromeBasic(b) ? "Palindrome" : "no" );

    printf("//////////////////////\n");

    char words[][20] = {"level", "deed", "world"};
    for(int i = 0; i < 3; i++)
    {
        printf("%s -> %d\n", words[i], 
            isPalindromeUsingReverse(words[i]));
    }

    char s1[] = "A man a plan a canal Panama";
    char s2[] = "Race car";
    printf("s1 -> %d\n", isPalindromeSmart(s1));   /* 1 */
    printf("s2 -> %d\n", isPalindromeSmart(s2));   /* 1 */
    return 0;
}