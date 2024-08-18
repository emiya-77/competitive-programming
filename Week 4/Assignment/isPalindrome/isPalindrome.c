#include <stdio.h>
#include <string.h>

int is_palindrome(char *str)
{
    int n = strlen(str);
    int palindrome = 1;

    for (int i = 0; i < (n / 2) + 1; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            palindrome = 0;
            break;
        }
    }
    return palindrome;
}

int main()
{
    char a[1000];
    scanf("%s", a);
    int res = is_palindrome(a);
    if (res)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}