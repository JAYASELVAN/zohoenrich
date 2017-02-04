#include <stdio.h>

int main(void) {
	int a[15],n,i,rot;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	printf("Enter the no of elements to be shifted\n");
	scanf("%d",&rot);
	for(i=(n-1);i>=0;i--)
	{   
	    if(i>=(n-rot-1))
	    {
	        a[i]=a[i-rot];
	    }
	    else
	    {
	        a[i]=0;
	    }
	}
	for(i=0;i<n;i++)
	{
	    printf("%d",a[i]);
	}
	return 0;
}

