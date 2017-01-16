#include <stdio.h>

void find_palindrome(int n);
int main(void) 
{
	int num;
	printf("Enter the number after the palindrome to be find");
	scanf("%d",&num);
	int k=1;
	num++;
	while(k!=0)
	{
    find_palindrome(num);
    num++;
	}
	return 0;
}
void find_palindrome(int n)
{
    int rev=0;
    int dig=n;
    int rem;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        rev=(rev*10)+rem;
    }
    if(dig==rev)
    {
        printf("%d",dig);
        exit(0);
    }
}

