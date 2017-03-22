#include <stdio.h>

int main(void) {
	int n,i,j,k;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    if((i%2)!=0)
	    {
	        k=(n*i)-n+1;
	        for(j=k;j<(k+n);j++)
	        {
	            printf("%d ",j);
	        }
	    }
	    else
	    {
	        k=n*i;
	        for(j=k;j>(k-n);j--)
	        {
	            printf("%d ",j);
	        }
	    }
	    printf("\n");
	}
	return 0;
}

