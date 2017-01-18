#include <stdio.h>
int prime(int n);
int main(void) 
{
	int num,l=0;
	printf("Enter the number after the prime  to be find\n");
	scanf("%d",&num);
	num++;
	while(1!=0)
	{
    l=prime(num);
    num++;
    if(l!=0)
    {
        printf("%d",l);
        exit(0);
    }
	}
	return 0;
}
int prime(int n)
{
    int dig=0;
    int i;
    int s=0;
    for(i=2;i<n;i++)
    {
        if((n%i)==0)
        {
            dig =1;
        }
    }
    if(dig==0)
    {
        return n;
    }
    else
    {
        return s;
    }
}

