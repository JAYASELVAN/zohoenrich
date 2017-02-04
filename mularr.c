#include <stdio.h>

int main(void) {
	int a[125],i,n,e[125],j=0,key;
	printf("Enter the number of elements\n");
	scanf("%d",n);
	printf("Enter the multiples of a number to be printed\n");
	scanf("%d",key);
	printf("Enter the array list\n");
	for(i=0;i<n;i++)
	{
	    scanf("%d",a[i]);
	    if((a[i]%key)==0)
	    {
	        e[j]=i;
	    }
	}
	for(i=0;i<j;i++)
	{
	    printf("%d\t",e[i]);
	}
	printf("\n");
	return 0;
}

