#include <stdio.h>

int main(void) {
	int a[5],k;
	printf("Enter the element to be searched\n");
	scanf("%d",&k);
	printf("Enter the array numbers to be stored:\n");
	int i;
	for(i=0;i<5;i++)
	{
	    scanf("%d",&a[i]);
	    if(k==a[i])
	    {
	        printf("%d",i);
	    }
	}
	return 0;
}

