#include<stdio.h>

void main()
{
    char a[1000];
    int cnt=0,bcnt=1,i;
    scanf("%s",a);
    for(i=1;a[i];i++)
    {
        if(a[i]==a[i-1])
        {
            cnt++;
            if(bcnt<cnt)
                bcnt=cnt;
        }
        else
        cnt=1; 
    }
    printf("%d",bcnt);
}