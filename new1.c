#include <stdio.h>
int main()
{
    int n, a[100];
    printf("Enter the size of array :");
    scanf("%d",&n);
    printf("Enter %d elements :\n",n);
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array elements in reverse order :\n");
    for(int i=n-1 ; i>=0 ; i--)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
