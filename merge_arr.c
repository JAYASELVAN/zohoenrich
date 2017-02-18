# include<stdio.h>
int main()
{
	int i,a[3]={1,2,3};
	char b[3]={'a','b','c'};
	char c[6];
	int j=0;
	for(i=0;i<3;i++)
	{
		c[j]=a[i]+'0';
		j++;
		c[j]=b[i];
		j++;
	}
	for(i=0;i<j;i++)
	{
		printf("%c",c[i]);
	}
	return 0;
}
