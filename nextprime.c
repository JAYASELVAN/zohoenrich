#include <stdio.h>
void find_prime(int n);
int main(void) 
{
	int num;
	printf("Enter the number after the prime  to be find");
	scanf("%d",&num);
	int k=1;
	num++;
	while(k!=0)
	{
    void find_prime(num);
    num++;
	}
	return 0;
}
void find_prime(int n)
{
    int dig=0;
    int i;
    for(i=2;i<n;i++)
    {
        if((n%i)==0)
        {
            dig =1;
        }
    }
    if(dig==0)
    {
        printf("%d",n);
        exit(0);
    }
}

