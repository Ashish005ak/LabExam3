#include<stdio.h>

void main()
{
    int a[1000],b[1000],n,cnt=1,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    b[0]=a[0];
    for(i=1;i<n;i++)
    {
        for(j=0;j<cnt;j++)
            if(a[i]==b[j])
      	        break;
        if(j==cnt)
            b[cnt++]=a[i];
    }
    printf("%d",cnt);
}