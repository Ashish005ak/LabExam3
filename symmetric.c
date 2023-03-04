#include<stdio.h>

void main()
{
    int a[80][80],b[80][80],val=0;
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        b[i][j]=a[j][i];
    if(m!=n)
    {
    val=1;
    goto l1;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=b[i][j])
            {
                val=1;
                break;
            }
        }
    }
    l1:;
    if(val==1)
    printf("Not symmetric");
    else
    printf("Symmetric");

}