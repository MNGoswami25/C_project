#include<stdio.h>
#include<string.h>
void add_stu();
void view_stu();
void update_stu();
void design();
int login();
void logincheck(int);
void help();
void admin();
void user();
void new_user();
void student();
void new_admin();
void logout();



int main()
{
    int ch;
    printf("                         Graphic Era Hill University\n");
    printf("************************************************************************************\n");
    printf("This System Stores Data of 2021-2025 Batch\n");
    design();
    login();
    return 0;
}
void design()
{
    printf("******************************************************\n");
    printf("\n");
}
int login()
{
    int ch;
    printf("Press 1 for Admin\n");
    printf("press 2 for User\n");
    printf("press 3 for Help \n");
    printf("Enter Your Choice : ");
    scanf("%d",&ch);
    if(ch==1)
    {
        design();
        logincheck(ch);
        admin();
    }
    else if(ch==2)
    {
        design();
        logincheck(ch);
        user();
    }
    else if(ch==3)
    {
       design();
       help();
       design();
       login(); 
    }
    else
    {
        design();
        printf("Invalid Choice\n");
        design();
        login();
    }
}
void logincheck(int type)
{
    FILE *fa;
    struct login
    {
        int t;
        int id;
        char pass[10];
        int typ;
    }lo[50];
    int a_id,i=0,c;
    char a_pswd[10];
    printf("Enter Id : ");
    scanf("%d",&a_id);
    printf("Enter Passward : ");
    fflush(stdin);
    gets(a_pswd);
    fa=fopen("Login.txt","r");
    if(fa==NULL)
    {
        printf("Read Error");
        return;
    }
    fread(lo,sizeof(lo),1,fa);
    while(lo[0].t!=0)
    {
        if(lo[i].typ==type && lo[i].id==a_id)
        {  
            c=strcmp(lo[i].pass,a_pswd);
            if(c==0)
            {
                design();
                printf("Login Successful\n");
                design();
                return ;
            }
            else
            {
                design();
                printf("Invalid Id or Password\n");
                design();
                login();
            }   
        }
        else{
            lo[0].t--;
            i++;

        }
    }
    design();
    printf("Invalid Id or Password\n");
    design();
    login();
}
void help()
{
    FILE *p;
    char str[50];
    p=fopen("helpuser.txt","r");
    if(p==NULL)
    {
        printf("Write Error");
        return ;
    }
    while(fgets(str,50,p)!=NULL)
    {
        puts(str);
    }
    fclose(p);
    return;
}
void admin()
{
    int ch,c;
    printf("1 About students \n");
    printf("2 add a new user \n");
    printf("3 help \n");
    printf("4 Exit \n");
    printf("Enter Your Choice : ");
    scanf("%d",&ch);
    if(ch==1)
    {
        student();
    }
    else if(ch==2)
    {
        new_user();

    }
    else if(ch==3)
    {
        design();
        help();
        design();
        admin();

    }
    else if(ch==4)
    {
        logout();   
    }
    else
    {
        design();
        printf("Invalid Input : \n");
        design();
        admin();
    }
    
}
void user()
{
   design();
    int ch;
    printf("1 About students \n");
    printf("2 help \n");
    printf("3 Exit \n");
    printf("Enter Your Choice : ");
    scanf("%d",&ch);
    if(ch==1)
    {
        student();
    }
    else if(ch==2)
    {
        design();
        help();
        design();
        user();

    }
    else if(ch==3)
    {
        logout();   
    }
    else
    {
        design();
        printf("Invalid Input : \n");
        design();
        user();
    }
}
void student()
{   
    design();
    int ch;
    printf ("1 for Add  new students \n");
    printf ("2 for View students  \n");
    printf("3 for Previous menu \n");
    printf("4  for exit \n");
    printf("Enter Your Choice : ");
    scanf("%d",&ch);
    if(ch==1)
    {
        add_stu();
        
    }
    else if(ch==2)
    {
        view_stu();

    }
    else if(ch==3)
    {
        admin();   
    }
    else if(ch==4)
    {
       logout();  
    }
    else
    {
        design();
        printf("Invalid Input : \n");
        design();
        student();
    }
    
}
void new_user()
{
    printf("new user");
}
void logout()
{
    design();
    int ch;
    printf("Press 1 for Logout : \n");
    printf("Press 2 for Cancel : \n");
    printf("Enter Your Choice: ");
    scanf("%d",&ch);
    if(ch==1)
    {
       design();
        main();
    }
    else if(ch==2)
    {
        return;
    }
    else
    {
        design();
        printf("Invalid Input : \n");
        design();
        logout();
    }
}
void add_stu()
{
    FILE *f1;
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
    int i,j,n2,t;
    f1=fopen("Student_data.txt","a");
    if(f1==NULL)
    {
        printf("Write Error");
        student() ;
    }
    design();
    printf("Enter no of Student : ");
    scanf("%d",&n2);
    s_d[0].ts=t;
    s_d[0].ts=t+n2;
    for(i=0;i<=n2-1;i++)
    {
        printf("Enter details for %d Student : \n",i+1);
        s_d[i].srn=s_d[i].srn+1;
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
        scanf("%c",&s_d[i].sec);
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
    student();
}
void view_stu()
{
    design();
    FILE *f1;
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
    int i=0;
    f1=fopen("Student_data.txt","r");
    if(f1==NULL)
    {
        printf("Write Error");
        student() ;
    }
    fread(s_d,sizeof(s_d),1,f1);
    fread(s_d,sizeof(date),1,f1);
    while(s_d[0].ts!=0)
    {
        printf(" details of %d Student : \n",i+1);
        printf("Name : ");
        fflush(stdin);
        puts(s_d[i].name);
        printf("DOB(dd,mm,yy) : %d  %d  %d \n",s_d[i].dob.dd,s_d[i].dob.mm,s_d[i].dob.yy);
        printf("Phone Number : %d \n",s_d[i].numbr);
        printf("Father Name : ");
        fflush(stdin);
        puts(s_d[i].f_name);
        printf("Mother Name : ");
        fflush(stdin);
        puts(s_d[i].m_name);
        printf("Student ID : %d\n",s_d[i].stu_id);
        printf("Course : ");
        fflush(stdin);
        puts(s_d[i].course);
        printf("Branch : ");
        fflush(stdin);
        puts(s_d[i].Branch);
        printf("Section: %c\n",s_d[i].sec);
        printf("Class Roll no : %d\n",s_d[i].crn);
        printf("University Roll no : %d\n",s_d[i].univ);
        printf("High school percentage : %.2f\n",s_d[i].per_x);
        printf("Intermideate percentage : %.2f\n",s_d[i].per_xii);
        s_d[0].ts--;
        i++;
        printf("***********************************************************************\n");
    } 
    printf("Data Successfully Displayed\n");
    fclose(f1);
    student();
}

