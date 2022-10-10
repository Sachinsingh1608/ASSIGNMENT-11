/*prime number*/
#include<stdio.h>
void prime(int);
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    prime(x);
    return 0;

}
void prime(int n)

{

    int x=1,i;
    printf("\a");
     printf("*************************************\n");


    while(n)
    {

        for(i=2;i<x;i++)
            if(x%i==0)
            break;
        if(i==x){
            printf("%d\t",x);
            n--;

        }
        x++;
    }
}
