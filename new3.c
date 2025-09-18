#include <stdio.h>
int main()
{
    int n, a[100];
    printf("Enter the size of array :");
    scanf("%d", &n);
    printf("Enter %d elements :\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d is even \n", a[i]);
        }
        else
        {
            printf("%d is odd \n", a[i]);
        }
    }

    return 0;
}