#include <stdio.h>

int main(void) {
    int i=1,k,j;
    while(i<=5)
    {
        k=5-i;
        for(j=1;j<=k;j++)
        {
            printf(" ");
        }
        int l=1;
        while(l<=i)
        {
            printf("*");
            if(l<i)
            {
                printf(" ");
            }
            l++;
        }
    }
    printf("\n");
    i++;
	return 0;
}

