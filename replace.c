#include<stdio.h>

void main()
{
    int i;
    char a[1000],ch,b[1000];
    scanf("%s %c %s",a,&ch,b);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==ch)
        printf("%s",b);
        else
        printf("%c",a[i]);
    }
}