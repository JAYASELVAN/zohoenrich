#include <stdio.h>

int main(void) {
	int a[25],k,j=0;
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
	int i,l,m,h;
	l=j/2;
	if(a[l]==k)
	{
	    printf("%d",l);
	}
	else if(a[l]>k)
	{
	    m=l;
	    h=0;
	}
	else
	{
	    m=j;
	    h=l+1;
	}
	for(i=h;i<m;i++)
	{
	    if(k==a[i])
	    {
	        printf("%d",i);
	    }
	}
	return 0;
}

