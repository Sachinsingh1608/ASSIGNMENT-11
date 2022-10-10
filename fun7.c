/* factorial number */
#include<stdio.h>
int fibo(int n);
int fibo(int n)
{

int f1=0,f2=1;
long int f3,i;
printf("%d,%d,",f1,f2);
for(i=1;i<=n;i++)
{
    f3=f2+f1;
    printf("%d,",f3);
    f1=f2;
    f2=f3;
}
}
int main()
{
int x;
printf("enter a number:-");

scanf("%d",&x);
printf("**************************************\n");
fibo(x);
return 0;
}
