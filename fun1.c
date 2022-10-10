/* find lcm of two number */
#include<stdio.h>
int lcm(int,int);
int main()
{
    int x,y,s;
    printf("enter a number");
    scanf("%d %d",&x,&y);
    s=lcm(x,y);
    printf("lcm of number %d %d %d",x,y,s);






    return 0;

}
int lcm(int a,int b)
{
    int i;
    for(i=2;i<=(a*b);i++)
    {
        if((i%a==0)&&(i%b==0))
        break;

    }
    return i;


}
