/*find prime number */
#include<stdio.h>
int prime(int);
int main()
{
    int x,s;
    printf("enter a number");
    scanf("%d",&x);
    s=prime(x);
    if(s)
        printf("%d");
    else
        printf(" prime number");


}
int prime(int a)
{

    int count=0;
    for(int i=1;i<=a;i++)
    {

        if(a%i==0)
            count++;

    }

    if(count>2)
        return a+=1;
    else
        return 0;
}

