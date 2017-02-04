#include <stdio.h>

int main(void) {
	int a[125],i,n,e[125],o[125],j=0,k=0;
	printf("Enter the number of elements\n");
	scanf("%d",n);
	printf("Enter the array list\n");
	for(i=0;i<n;i++)
	{
	    scanf("%d",a[i]);
	    if((a[i]%2)==0)
	    {
	        e[j]=a[i];
	        j++;
	    }
	    else
	    {
	        o[k]=a[i];
	        k++;
	    }
	}
	for(i=0;i<j;i++)
	{
	    printf("%d\t",e[i]);
	}
	printf("\n");
	for(i=0;i<k;i++)
	{
	    printf("%d\t",o[i]);
	}
	return 0;
}

