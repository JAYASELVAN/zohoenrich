#include <stdio.h>
int main(void) {
	int n,a[25],i,j=0,b[25],max1,max2;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    if((a[i]%2)==0)
	    {
	        b[j]=a[i];
	    }
	    j++;
	}
	max1=b[0];
	max2=b[1];
	for(i=0;i<j;i++)
	{
	    if(max1<b[i])
	    {
	        max2=max1;
	        max1=b[i];
	    }
	    else if(max2<b[i])
	    {
	        max2=b[i];
	    }
	}
	printf("%d",max2);
	return 0;
}
