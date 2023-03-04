#include<stdio.h>

void main()
{
    FILE *fp,*fp1,*fp2;
    char ch;
    fp=fopen("Sample1.txt","w");
    do
    {
        ch=getchar();
        putc(ch,fp);
    }while(ch!='@');
    fclose(fp);
    fp1=fopen("Sample1.txt","r");
    fp2=fopen("Sample2.txt","w");
    do
    {
        ch=getc(fp1);
        putc(ch,fp2);
    }while(ch!='@');
    fclose(fp1);
    fclose(fp2);
    fp=fopen("Sample2.txt","r");
    printf("Copied text is\n");
    while(1)
    {
        ch=getc(fp);
        if(ch=='@')
        break;
        putchar(ch);
    }
}