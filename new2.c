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
    int max = a[0];
    for(int i=0 ; i<n ; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    printf("Maximum element is %d",max);
    return 0;
}