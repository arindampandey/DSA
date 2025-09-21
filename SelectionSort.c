#include <stdio.h>
int main()
{
    int a[100], n, i, j, min, t;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            t = a[i];
            a[i] = a[min];
            a[min] = t;
        }
    }

    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}