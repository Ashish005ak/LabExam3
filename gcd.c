#include<stdio.h>

int gcd(int a, int b)
{
    if(b!=0)
    return(gcd(b,a%b));
    else
    return a;

}
void main()
{
    int i,num1,num2;
    scanf("%d %d",&num1,&num2);
    i=gcd(num1,num2);
    printf("%d",i);
}