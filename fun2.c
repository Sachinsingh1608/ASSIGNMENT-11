/* find hcf of two number */
#include<stdio.h>
int hcf(int,int);
int main()
{
    int x,y,s;
    printf("enter a number");
    scanf("%d %d",&x,&y);
    s=lcm(x,y);
    printf("hcf of number %d %d %d",x,y,s);
    return 0;

}
int hcf(int a,int b)
{
    int i,h;
    for(i=2;i<=(a*b);i++)
    {
        if((i%a==0)&&(i%b==0))
        break;

    }
    h=(a*b)/i;
    return h;


}

