#include <stdio.h>

int main(void) {
	char c[15]="ayguyjksaux";
	int i,count=0;
	for(i=0;i<11;i++)
	{
	    if((c[i]=='a')||(c[i]=='e')||(c[i]=='i')||(c[i]=='o')||(c[i]=='u'))
	    {
	        count++;
	    }
	}
	printf("%d",count);
	return 0;
}

