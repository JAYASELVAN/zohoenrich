#include <stdio.h>

int main(void) {
	int a[15],n,i,rot,j=0;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	printf("Enter the no of elements to be shifted\n");
	scanf("%d",&rot);
	for(i=rot;i<n;i++)
	{
	    printf("%d\t",a[i]);
	    j++;
	}
	for(i=j;j<=n;j++)
	{
	    printf("0\t");
	}
	return 0;
}

