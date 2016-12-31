# include<stdio.jh
# include<string.h>
int m ain()
{
    char s1[25];
    char s2={'a','e','i','o','u','A','E','I','O','U',' '};
    char s3[25];
    int i,j,l,q=0;
    scanf("%s",s1);
    l=strlen(s1);
    for(i=0;i<11;i++)
    {
        for(j=0;j<l;j++)
        {
            if(s1[j]==s2[i])
            {
                s1[j]='+';
            }
        }
    }  
    for(i=0;i<l;i++)
    {
        if(s1[i]!='+')
        {
            s3[q]=s1[i];
            q++;
        }
    }
    printf("%s",s3);
    return 0;
}
