#include<stdio.h>
#include<string.h>
struct students 
{
    char name[80],rno[80];
    int m1,m2,m3,avg;
};

void sort(struct students s[], int n)
{
    struct students t;
    int indx,i,j;
    for(i=n-1;i>0;i--)
    {
        indx=0;
        for(j=1;j<=i;j++)
            if(s[indx].avg>s[j].avg)
                indx=j;
            strcpy(t.name,s[i].name);
            strcpy(t.rno,s[i].rno);
            t.m1=s[i].m1;
            t.m2=s[i].m2;
            t.m3=s[i].m3;
            t.avg=s[i].avg;

            strcpy(s[i].name,s[indx].name);
            strcpy(s[i].rno,s[indx].rno);
            s[i].m1=s[indx].m1;
            s[i].m2=s[indx].m2;
            s[i].m3=s[indx].m3;
            s[i].avg=s[indx].avg;

            strcpy(s[indx].name,t.name);
            strcpy(s[indx].rno,t.rno);
            s[indx].m1=t.m1;
            s[indx].m2=t.m2;
            s[indx].m3=t.m3;
            s[indx].avg=t.avg;
    }

}

void main()
{
    struct students s[80];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s %s %d %d %d",s[i].name,s[i].rno,&s[i].m1,&s[i].m2,&s[i].m3);
        s[i].avg=(s[i].m1+s[i].m2+s[i].m3)/3;
    }
    sort(s,n);
    for(i=0;i<n;i++)
        printf("%s %s %d %d %d %d\n",s[i].name,s[i].rno,s[i].m1,s[i].m2,s[i].m3,s[i].avg);
    
}