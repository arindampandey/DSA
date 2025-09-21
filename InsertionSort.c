#include <stdio.h>
void main()
{
    int a[100], n, i, j, t;
    printf("Enter the size of array :");
    scanf("%d", &n);
    printf("Enter %d elements :", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i < n; i++)
    {
        t = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > t)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = t;
    }
    printf("Sorted array in ascending order :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    //getch();                         
}        