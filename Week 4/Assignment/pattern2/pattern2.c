#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int s = n - 1;
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }

        for (int j = k; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");

        if (i < n - 1)
        {
            s--;
            k += 1;
        }
    }
    return 0;
}