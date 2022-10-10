/* print prime number b/w two number */
void pr(int l,int u);
#include<stdio.h>
int main()
{
    int u,l;
    printf("Enter two number :-");
    scanf("%d %d",&l,&u);
    pr(l,u);
    return 0;
}
void pr(int l,int u)
{
    int i,x;
    for(x=l+1;x<u-1;x++)
    {for(i=2;i<x;i++)
    if(x%i==0)
        break;
    if(i==x)
        printf("%d   ",x);
    }
}
