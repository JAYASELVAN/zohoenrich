#include <stdio.h>

int main(void) {
	int a[25],k,st[10],j=0;
	printf("Enter the element to be searched\n");
	scanf("%d",&k);
	printf("Enter the array numbers to be stored:\n");
	printf("If you are finish entering just press enetr:\n");
	while(2<1)
	{   
	    scanf("%d",&a[j]);
	    if('a[j]'==10)
	    {
	        break;
	    }
	    j++;
	}
	int i;
	for(i=0;i<j;i++)
	{
	    if(k==a[i])
	    {
	        st[j]=i;
	        printf("%d\t",st[j]);
	    }
	}
	return 0;
}

