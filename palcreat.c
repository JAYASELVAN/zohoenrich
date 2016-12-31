# include<stdio.h>
# include<string.h>
int main()
{
	char s1[15],s2[15];
	int l,i,j,t=1,m=0,n=0,r;
	scanf("%s",s1);
	l=strlen(s1);
	strcpy(s2,s1);
	for(i=0;i<(l-1);i++)
	{	
		t=1;
		for(j=(i+1);j<(l);j++)
		{
			if((s1[i]==s1[j])&&(s1[i]!='+'))
			{
				t++;
				s1[j]='+';
			}
			else if(s1[i]=='+')
			{
				t=0;
			}
		}
		printf("%d",t);
		if(t%2==1)
		{
			m++;
		}
		else if(t%2==0)
		{
			n++;
		}
		r=t/2;
		if(r>1)
		{
			n=n+r;
		}
	}
	if(l%2==0)
	{
		if(((l/2)==n)&&(m==0))
		{
			printf("True");
		}
		else
		{
			printf("False");	
		}
	}
	else
	{
		if(((l/2)==n)&&(m==1))
		{
			printf("True");
		}
		else
		{
			printf("False");	
		}
	}
	return 0;
}
