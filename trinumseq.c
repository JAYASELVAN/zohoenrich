# include<stdio.h>
int main()
{
	int i=1,j,total=0,num;
	printf("Enter the number");
	scanf("%d",&num);
	for(j=1;j<=num;j++)
	{
		total=total+i;
		i++;
		if(j<num)
		{
			printf("%d,",total);
		}
		else
		{
			printf("%d",total);	
		}
	}
	return 0;
}
