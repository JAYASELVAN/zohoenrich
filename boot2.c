#include <stdio.h>
int add(int r);
int main(void) 
{
	int i,j,m=1,n,k,l;
	n=6/3;
	for(i=1;i<=6;i++)
	{
	    k=i;
	    for(j=1;j<=i;j++)
	    {
	        if(i<=n)
	        {
	            printf("%d\t",m);
	        }
	        else if(i<=(2*n))
	        {
	            if((j==m)||(j==k))
	            {
	                printf("%d\t",m);
	            }
	            else
	            {
	                printf("%d\t",(i-1));
	            }
	        }
	        else
	        {
            if((j==m)||(j==k))
	        {
	            printf("%d\t",m);
	        }
	        else if((j==(m+1))||(j==(k-1)))
	        {
	            printf("%d\t",(i-1));
	        }
	        else
	        {
	            l=add((i-2)); 
	            printf("%d\t",l);
	        }
	        }
	    }
	    printf("\n");
	}
	return 0;
}
int add(int r)
{
    int tot=0;
    while(r!=0)
    {
        tot=tot+r;
        r--;
    }
    return tot;
}
