#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int s = n + 4;
    int d = 1;
    for (int i = 0; i < n + 5; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < d; j++)
        {
            printf("*");
        }
        printf("\n");
        s--;
        d += 2;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}