#include<stdio.h>

void setsub(int a[], int n1, int b[], int n2, int c[], int *pn3)
{
    int i,j,k=0;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(a[i]==b[j])
            break;
        }
        if(j==n2)
        c[k++]=a[i];
    }
    *pn3=k;
}

void main()
{
    int a[100],b[100],c[100],n3,n1,n2,big,x,y,z,i;
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
    setsub(a,n1,b,n2,c,&n3);
    big=0;
    for(i=0;i<n3;i++)
        if(c[i]>big)
            big=c[i];
    printf("%d",big);
}
