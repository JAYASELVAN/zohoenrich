# include<stdio.h>
# include<string.h>
int main()
{
	char s1[15];
	char s2[15];
	int i,j,l,q=0;
	scanf("%s",s1);
	l=strlen(s1);
	for(i=0;i<(l-1);i++)
	{	
		for(j=(i+1);j<l;j++)
		{
			if(s1[i]==s1[j])
			{
				s1[j]='+';	
			}
			
		}
	}
	for(i=0;i<l;i++)
	{
		if(s1[i]!='+')
		{
			s2[q]=s1[i];
			printf("%c",s2[q]);
			q++;
		}
	}
	return 0;
}
