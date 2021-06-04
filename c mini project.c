#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct viva_mark
{
    int rollno;
    char studentname[20];
    int viva_marks[10];
    int total;
    float average;
    char remarks[15];
}students[100],o[100];
int main(void)
{
    FILE *fp;
    fp=fopen("vivaproject1.txt","w");
    int a,b,c,n,t,k,r=0,s,i,x;
    float u;
    char ch;
    printf("How many sudents to perform viva:");
    scanf("%d",&n);
    printf("\nEnter no of vivas conducted:");
    scanf("%d",&s);
    fprintf(fp,"VIVA MARK REGISTRATION");
    fprintf(fp,"\nNo of students performed viva are:%d",n);
    fprintf(fp,"\nNo of vivas conducted:%d",s);
    fprintf(fp,"\nROLL NO\t\tSTUDENT NAME");
    for(i=1;i<=s;i++)
    {
        fprintf(fp,"\tVIVA%d MARKS",i);
    }
    fprintf(fp,"\tTOTAL\t\tAVERAGE");
    for(a=1;a<=n;a++)
    {
    	 printf("\nEnter the student %d roll no(7digits):",a);
        scanf("%d",&students[a].rollno);
        fprintf(fp,"\n%d",students[a].rollno);
        printf("\nEnter the student %d name:",a);
        scanf("%s",&students[a].studentname);
        fprintf(fp,"\t\t%s",students[a].studentname);
        r=0;
    for(b=1;b<=s;b++)
    {
        printf("Enter the viva %d mark:",b);
        scanf("%d",&students[b].viva_marks[b]);
        r=r+students[b].viva_marks[b];
    students[a].total=r;
        u=(float)students[a].total/(float)s;
        fprintf(fp,"\t\t\t%d",students[b].viva_marks[b]);
    }
        printf("the total: %d",r);
        printf("\nThe average: %.2f",u);
        fprintf(fp,"\t%d",students[a].total);
        fprintf(fp,"\t\t%.2f",u);
    };
    for(a=1;a<=n;a++)
    {
        for(b=1;b<=s;b++)
        {
            if(students[a].total>students[b].total)
            {
               o[a]=students[a];
               students[a]=students[b];
               students[b]=o[a];
            }
        }
    }
    printf("\nVIVA MERIT LIST");
    fprintf(fp,"\nVIVA MERIT LIST");
    printf("\nROLL NO\tNAME\tTOTAL");
    fprintf(fp,"\nROLL NO\tNAME\tTOTAL");
    for(a=1;a<=n;a++)
    {
        printf("\n%d %s %d",students[a].rollno,students[a].studentname,students[a].total);
        fprintf(fp,"\n%d %s %d",students[a].rollno,students[a].studentname,students[a].total);
    }
    getch();
}
