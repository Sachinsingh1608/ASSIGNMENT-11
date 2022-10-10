/* pascal triangle */
#include<stdio.h>
int fact(int n)
{
  int i,s=1;
  for(i=1;i<=n;i++)
  {
    s=s*i;
  }
        return s;

}
int combi(int n,int r)
{
    return fact(n)/(fact(n-r)*fact(r));
}
int permu(int n,int r)
{
    return fact(n)/fact(n-r);
}
void pascal(int n)
{
    int i,j;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
            printf("%d",combi(i,j));
            printf("\n");
    }

}
int main()
{


pascal(5);
}
