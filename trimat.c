#include <stdio.h>

int main(void) 
{
    int i;
    int j=1,k,n;
    for(i=1;i<=6;i++)
    {
        k=i;
        for(n=1;n<=i;n++)
        {
            if((n==j)||(n==k))
            {
                printf("%d\t",j);
            }
            else
            {
                printf("%d\t",i);
            }
        }
        printf("\n");
    }
    return 0;
}

