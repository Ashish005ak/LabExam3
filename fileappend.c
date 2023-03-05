#include<stdio.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("Sampleappend.txt","w");
    while(1)
    {
        ch=getchar();
        if(ch=='@')
        break;
        else
        putc(ch,fp);
    }
    
    fclose(fp);
    printf("Enter text to append\n");
    fp=fopen("Sampleappend.txt","a");
    do
    {
        ch=getchar();
        putc(ch,fp);
    }while(ch!='@');
    fclose(fp);
    fp=fopen("Sampleappend.txt","r");
    printf("Appended file is\n");
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