#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        for(j=1; j<=i; j++)
            printf("%d",j);
        for(j=i-1; j>=1; j--)
            printf("%d",j);

        printf("\n");

    }
    return 0;
}