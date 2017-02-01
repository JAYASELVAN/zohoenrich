# include<stdio.h>
int lenth(int n);
void find_pal(int nu,int le);
int main() {
	int n1;
	printf("Enter the to find the next nearest palindrome\t");
	scanf("%d",&n1);
	int num;
	num=n1+1;
	int l;
	l=length(num);
	find_pal(num,l);
	return 0;
}
int length(int n)
{
    int len=0;
    while(n!=0)
    {
        n=n/10;
        len++;
    }
    return len;
}
void find_pal(int nu,int le)
{
    int b;
    b=nu;
    int half;
    half=le/2;
    int a=1;
    while(half!=0)
    {
        a=a*10;
        half--;
    }
    nu=nu/a;
    nu=nu*a;
    int r;
    int rev=0;
    while(b!=0)
    {
        r=b%10;
        b=b/10;
        rev=(rev*10)+r;
    }
    int part=rev%a;
    nu=nu+part;
    printf("%d",nu);
}
