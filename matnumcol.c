#include <stdio.h>

int main(void) {
    int num,i,j,t;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {   
        t=1;
        for(j=0;j<num;j++)
        {
            printf("%d\t",t);
            t++;
        }
        printf("\n");
    }
	return 0;
}
