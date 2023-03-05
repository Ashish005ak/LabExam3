#include<stdio.h>

void main()
{
    FILE *fp;
    char ch;
    fp=fopen("Sample.txt","w");
    do
    {
        ch=getchar();
        putc(ch,fp);
    }while(ch!='@');
    fclose(fp);
    fp=fopen("Sample.txt","r");
    printf("Given message is\n");
    while(1)
    {
        ch=getc(fp);
        if(ch=='@')
        break;
        else
        putchar(ch);
    }
    fclose(fp);
}