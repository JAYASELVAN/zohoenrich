#include <stdio.h>

int main(void) {
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int i=0,t;
	while(i<10)
	{
	    t=a[i];
	    a[i]=a[(i+1)];
	    a[(i+1)]=t;
		printf("%d\t%d\t",a[i],a[(i+1)]);
	    i=i+2;
	}
	return 0;
}

