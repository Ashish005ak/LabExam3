#include<stdio.h>
void main()
{
	int a[50][50],i,j,m,n,val=0;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			if(i<j)
			{
				if(a[i][j]!=0)
				val=1;
				break;
			}
		}
		if(val==1)
			printf("Not lower triangular");
		else
			printf("Lower triangular");
}