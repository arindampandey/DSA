#include <stdio.h>
int main()
{
    int n, a[100],k;
    printf("Enter the size of array :");
    scanf("%d", &n);
    printf("Enter %d elements :\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter a number :");
    scanf("%d",&k);
    for(int i=0 ; i<n ; i++)
    {
    if(a[i]+a[i+1]==k)
    {
        printf("%d and %d\n",a[i],a[i+1]);
    }
    }
    return 0;
}