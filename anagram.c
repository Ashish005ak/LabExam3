#include<stdio.h>
#include<string.h>
void selectsort(char x[],int n)
{
    char t;
    int indx,i,j;
    for(i=n-1;i>0;i--)
    {
        indx=0;
        for(j=1;j<=i;j++)
            if(x[indx]<x[j])
                indx=j;
            t=x[indx];
            x[indx]=x[i];
            x[i]=t;
    }
}
void main()
{
    char a[1000],b[1000];
    int i,cnt=0,l1,l2;
    scanf("%s %s",a,b);
    l1=strlen(a);
    l2=strlen(b);
    if(l1!=l2)
    {
        cnt=-1;
        goto l1;
    }

    for(i=0;i<l1;i++)
        if(a[i]==b[i])
            cnt++;
    selectsort(a,l1);
    selectsort(b,l2);
    for(i=0;i<l1;i++)
        if(a[i]!=b[i])
            cnt=-1;
    l1:
    printf("%d",cnt);
}