# include<stdio.h>
int main()
{
	int m,n,i,j,temp;
	int a[10][10];
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(((i==0)&&(j==0))||((i==(m-1))&&(j==0)))
			{
				temp=a[i][j];
				a[i][j]=a[i][n-1];
				a[i][n-1]=temp;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
