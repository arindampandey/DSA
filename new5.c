#include <stdio.h>
int main()
{
    int n, a[100],count=0;
    printf("Enter the size of array :");
    scanf("%d", &n);
    printf("Enter %d elements :\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=0 ; i<n ; i++)
    {
        if(a[i]==a[n-i])
        {
            count ++;
        }
    }
    if(count==0)
    {
        printf("Not a Pallindrome");
    }
    else
    {
        printf("Pallindrome");
    }
    return 0;
}