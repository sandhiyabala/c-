#include<stdio.h>
int main()
{
    int N,K,sum=0,i;
    scanf("%d%d",&N,&K);
    for(i=0;i<=K;i++)
    {
     sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
