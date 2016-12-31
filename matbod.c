# include<stdio.h>
int main()
{
    int num,dup,tot=0,rem;
    printf("Enter the number");
    scanf("%d",&num);
    dup=num;
    while(num!=0)
    {
        rem=num%10;
        num=num/10;
        tot=(tot*10)+rem;
    }
    (dup==tot)?printf("The number is palindrome") : printf("The number is not palindrome");
    return 0;
}
