# include<stdio.h>
# include<string.h>
int main()
{
	char s1[15];
	char s2[5]={'a','e','i','o','u'};
	int i,j,l,c=0;
	scanf("%s",s1);
	l=strlen(s1);
	for(i=0;i<5;i++)
	{	c=0;
		for(j=0;j<l;j++)
		{
			if(s1[j]==s2[i])
			{
				c++;
			}
		}
		printf("%c:%d\n",s2[i],c);
	}
}
