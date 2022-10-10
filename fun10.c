#include<stdio.h>
int factsum(int n);
int  fact(int n);
int factsum(int n)
{
    int s=0;
    for(int i=1;i<=n;i++)
    {
        s=s+(fact(i)/i);

    }
    return s;
}
int  fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
return f;
}
int main()
{
 int x;
 x=factsum(5);
 printf("%d",x);
}
