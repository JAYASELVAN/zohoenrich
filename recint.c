# include<stdio.h>
int main()
{
	float p=1000,f=3,t=6;
	float r=12;
	int i,j;
	float m,n;
	int c=t/f;
	float sum;
	int pr=p;
	for(i=1;i<=c;i++)
	{
		n=0;
		for(j=1;j<=f;j++)
		{
			sum=p+pr*(i+j-2);
			m=(sum*r)/1200;
			n=n+m;

		}
		p=sum+n;
	}
	printf("%f",p);
	return 0;
}
