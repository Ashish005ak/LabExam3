#include<stdio.h>

int fact(int n)
{
    if(n==1||n==0)
        return 1;
    else
    return (n*fact(n-1));
}

void main()
{
    int i,num;
    scanf("%d",&num);
    i=fact(num);
    printf("%d",i);
}