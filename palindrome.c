# include<stdio.h>
# include<string.h>
int main()
{
    char s1[15];
    char s2[15];
    gets(s1);
    s2=strrev(s1);
    if(strcmp(s1,s2)==0)
    {
        printf("The String is palindrome");
    }
    else
    {
        printf("The String is not a palindrome");
    }
}
