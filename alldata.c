#include<stdio.h>
#include<string.h>
int main()
{
    FILE *f1;
    /*typedef struct
    {
        int t;
        int id;
        char pass[10];
        int typ;
    }Login;
    login lo[50];
    int n,i,j,n2;
    char str[50];
    lo[0].t=0;
    f1=fopen("login.txt","w");
    if(f1==NULL)
    {
        printf("Write Error");
        return -1;
    }
    printf("Enter no of user : ");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        printf("Sign up for %d user : \n",i+1);
        printf("Press 1 for Admin\n");
        printf("Press 2 for User\n");
        printf("Enter your Choice : ");
        scanf("%d",&lo[i].typ);
        printf("Enter id : ");
        scanf("%d",&lo[i].id);
        printf("Enter Password : ");
        fflush(stdin);
        gets(lo[i].pass);
        lo[0].t++;
    }
    fwrite(lo,sizeof(login),n,f1);
    printf("Data Successfully Inserted \n");
    fclose(f1);
    f1=fopen("helpuser.txt","w");
    if(f1==NULL)
    {
        printf("Write Error");
        return -1;
    }
    printf("Enter string : ");
    fflush(stdin);
    while((gets(str))!=NULL)
    {
        fputs(str,f1);
        fputs("\n",f1);
    }  
    printf("Data Successfully Inserted ");
    fclose(f1);*/
    typedef struct
    {
        int dd;
        int mm;
        int yy;
    }date;
    typedef struct
    {
        int ts;
        int srn;
        char name[30];
        date dob;
        int numbr;
        char f_name[10];
        char m_name[10];
        int stu_id;
        char course[10];
        char Branch[10];
        char sec;
        int crn;
        int univ ;
        float per_x;
        float per_xii;
    }Stu_data;
    Stu_data s_d[50];
    int i,j,n2;
    s_d[0].ts=0;
    f1=fopen("Student_data.txt","w");
    if(f1==NULL)
    {
        printf("Write Error");
        return -1;
    }
    printf("Enter no of Student : ");
    scanf("%d",&n2);
    s_d[0].ts=n2;
    for(i=0;i<=n2-1;i++)
    {
        printf("Enter details for %d Student : \n",i+1);
        s_d[i].srn=i+1;
        printf("Name : ");
        fflush(stdin);
        gets(s_d[i].name);
        printf("DOB(dd,mm,yy) : ");
        scanf("%d%d%d",&s_d[i].dob.dd,&s_d[i].dob.mm,&s_d[i].dob.yy);
        printf("Phone Number :");
        scanf("%d",&s_d[i].numbr);
        printf("Father Name : ");
        fflush(stdin);
        gets(s_d[i].f_name);
        printf("Mother Name : ");
        fflush(stdin);
        gets(s_d[i].m_name);
        printf("Student ID ");
        scanf("%d",&s_d[i].stu_id);
         printf("Course : ");
        fflush(stdin);
        gets(s_d[i].course);
        printf("Branch : ");
        fflush(stdin);
        gets(s_d[i].Branch);
        printf("Section: ");
        fflush(stdin);
        scanf("%s",&s_d[i].sec);
        printf("Class Roll no : ");
        scanf("%d",&s_d[i].crn);
        printf("University Roll no : ");
        scanf("%d",&s_d[i].univ);
        printf("High school percentage : ");
        scanf("%f",&s_d[i].per_x);
        printf("Intermideate percentage : ");
        scanf("%f",&s_d[i].per_xii);
        printf("***********************************************************************\n");
    }
    fwrite(s_d,sizeof(Stu_data),n2,f1);
    fwrite(s_d,sizeof(date),n2,f1);
    printf("Data Successfully Inserted \n");
    fclose(f1);
    return 0;
}
    
