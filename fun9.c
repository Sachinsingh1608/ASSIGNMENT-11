#include<stdio.h>
int sq(int a);
int sq(int a)
{
     return a*a;
}
int main()
{
    int s;
    printf("enter a number");
    scanf("%d",&s);
    s=sq(s);
    printf("%d",s);
    return 0;
}
