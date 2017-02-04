# include<stdio.h>
void display(int b[3][3]);
int transpose(int c[3][3]);
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int *tr;
    display(a);
    tr=transpose(a);
    dislay(tr);
    return 0;
}
void dislay(int b[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}
int transpose(int c[3][3])
{
    int i,j,t;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i<j)
            {
                t=c[j][i];
                c[j][i]=c[i][j];
                c[i][j]=t;
            }
        }
    }
    return c;
}
