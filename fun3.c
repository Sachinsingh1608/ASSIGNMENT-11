/* factorial of number */
#include<stdio.h>
int fact(int n);
int fact(int n)
{
    int i;int c=1;
    for(i=1;i<=n;i++)
    {
        c=c*i;

    }
    return c;
}
int main()
{
    int x,y;
    printf("enter a number\n ");
    scanf("%d",&x);
    y=fact(x);
    printf("***********************************");
    printf("factorial of number is %d !=%d",x,y);
    return 0;
}
