#include <stdio.h>

int count_before_one(int *a, int n);

int main()
{
    int n, a[1000], res;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    res = count_before_one(a, n);
    printf("%d\n", res);

    return 0;
}

int count_before_one(int *a, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            break;
        }
        else
        {
            count++;
        }
    }

    return count;
}