#include<stdio.h>
void main()
{
    int a[1000],i=0,n,cnt=0,ans=-1,num;
    scanf("%d",&num);
    do
    {
        scanf("%d",&a[i++]);
    }while(a[i-1]!=-1);
    n=i-1;
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        cnt++;
        if(cnt==num)
        {
            ans=a[i];
            break;
        }
    }
    printf("%d",ans);
}