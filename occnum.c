# include<stdio.h>
int main()
{
	int a[15],search,n,i,t=0;
	scanf("%d%d",&n,&search);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(search==a[i])
		{
			t++;
		}
	}
	if(t>0)
	{
		printf("The element found for %d times",t);
	}
	else
	{
		printf("The element is not found");
	}
	return 0;	
}
