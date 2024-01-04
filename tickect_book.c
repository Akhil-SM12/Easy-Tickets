#include<stdio.h>
#include<windows.h>
#include<time.h>
int nou=0;

struct userticketinfo
{
    char username;
    char password;
    char moviename;

};

struct loginfo
{
    char username[50];
    char password[20];
};

int printRandoms(int lower, int upper, int count)
{
    int i, s=0;
    for (i = 0; i < count; i++)
    {
        int num = (rand() % (upper - lower + 1)) + lower;
        printf("%d\n", num);
        s=s*10+num;
    }
    return s;
}

void tykit(char un, char pwd)
{
    /* This function displays the ticket. The user details along with the movie, timing, seats selected and
    the price will be displayed, and the user will get to finish off the process using a card payment */
}

void m11000(char un, char pwd)
{
    /* This function will display the seating arrangement with the help of structure and 2D array.
    The user will get to select their seats on their own. Once done, the seating information along
    with the previous details gets stored in a file. And the final function is called */
}

void dummy()
{
    FILE *ptr=fopen("userdet.txt","r");
    char ch;
    ch=getc(ptr);
    while(ch!=EOF)
    {
        if(ch=='\n')
            nou+=1;
    }
    fclose(ptr);
}

void selpag(char un, char pwd)
{
    int mc, tc;
    printf("\n\n\n\t\t\t\t      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
    printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
    printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
    printf("\t\t\t\t      \xdb\t\t\t    Movies      \t      \xdb\n");
    printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
    printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
    printf("\t\t\t\t      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
    printf("\n\n\t\t\t\t\t    1.MOVIE 1\t\t\t2.MOVIE 2\n\n\t\t\t\t\t    3.MOVIE 3\t\t\t4.MOVIE 4\n\n\t\t\t\t\t    5.MOVIE 5\t\t\t6.MOVIE 6\n\n\t\t\t\t\t\t\t    0.EXIT");
    printf("\n\n\n\t\t\tEnter your choice : ");
    scanf("%d", &mc);
    system("cls");
    if(mc==1)
    {
        printf("\n\n\n\t\t\t\t      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
        printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
        printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
        printf("\t\t\t\t      \xdb\t\t\t   MOVIE 1      \t      \xdb\n");
        printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
        printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
        printf("\t\t\t\t      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
        printf("\n\n\n\t\t\t\t\t\t         1. 10:00AM\n\n\t\t\t\t\t\t         2. 02:30PM\n\n\t\t\t\t\t\t         3. 07:00PM\n\n\t\t\t\t\t\t         0. EXIT");
        printf("\n\n\n\t\t\tEnter your choice : ");
        scanf("%d", &tc);
        if(tc==0)
        {
            system("cls");
            selpag(un,pwd);
        }
        else
        {
            if(tc==1)
                printf("\n");
                //m11000(un,pwd);
            else if(tc==2)
                printf("\n");
                //m10200(un,pwd);
            else
                printf("\n");
                //m10700(un,pwd);
        }
    }
    else if(mc==2)
    {
        printf("\n\n\n\t\t\t\t      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
        printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
        printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
        printf("\t\t\t\t      \xdb\t\t\t   MOVIE 2      \t      \xdb\n");
        printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
        printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
        printf("\t\t\t\t      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
        printf("\n\n\n\t\t\t\t\t\t         1. 10:00AM\n\n\t\t\t\t\t\t         2. 02:30PM\n\n\t\t\t\t\t\t         3. 07:00PM\n\n\t\t\t\t\t\t         0. EXIT");
        printf("\n\n\n\t\t\tEnter your choice : ");
        scanf("%d", &tc);
        if(tc==0)
        {
            system("cls");
            selpag(un,pwd);
        }
        else
        {
            if(tc==1)
                printf("\n");
                //m21000(un,pwd);
            else if(tc==2)
                printf("\n");
                //m20200(un,pwd);
            else
                printf("\n");
                //m20700(un,pwd);
        }
    }
    else if(mc==3)
    {
        printf("\n\n\n\t\t\t\t      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
        printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
        printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
        printf("\t\t\t\t      \xdb\t\t\t   MOVIE 3      \t      \xdb\n");
        printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
        printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
        printf("\t\t\t\t      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
        printf("\n\n\n\t\t\t\t\t\t         1. 10:00AM\n\n\t\t\t\t\t\t         2. 02:30PM\n\n\t\t\t\t\t\t         3. 07:00PM\n\n\t\t\t\t\t\t         0. EXIT");
        printf("\n\n\n\t\t\tEnter your choice : ");
        scanf("%d", &tc);
        if(tc==0)
        {
            system("cls");
            selpag(un,pwd);
        }
        else
        {
            if(tc==1)
                printf("\n");
                //m31000(un,pwd);
            else if(tc==2)
                printf("\n");
                //m30200(un,pwd);
            else
                printf("\n");
                //m30700(un,pwd);
        }
    }
    else if(mc==4)
    {
        printf("\n\n\n\t\t\t\t      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
        printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
        printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
        printf("\t\t\t\t      \xdb\t\t\t   MOVIE 4      \t      \xdb\n");
        printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
        printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
        printf("\t\t\t\t      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
        printf("\n\n\n\t\t\t\t\t\t         1. 10:00AM\n\n\t\t\t\t\t\t         2. 02:30PM\n\n\t\t\t\t\t\t         3. 07:00PM\n\n\t\t\t\t\t\t         0. EXIT");
        printf("\n\n\n\t\t\tEnter your choice : ");
        scanf("%d", &tc);
        if(tc==0)
        {
            system("cls");
            selpag(un,pwd);
        }
        else
        {
            if(tc==1)
                printf("\n");
                //m41000(un,pwd);
            else if(tc==2)
                printf("\n");
                //m40200(un,pwd);
            else
                printf("\n");
                //m40700(un,pwd);
        }
    }
    else if(mc==5)
    {
        printf("\n\n\n\t\t\t\t      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
        printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
        printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
        printf("\t\t\t\t      \xdb\t\t\t   MOVIE 5      \t      \xdb\n");
        printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
        printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
        printf("\t\t\t\t      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
        printf("\n\n\n\t\t\t\t\t\t         1. 10:00AM\n\n\t\t\t\t\t\t         2. 02:30PM\n\n\t\t\t\t\t\t         3. 07:00PM\n\n\t\t\t\t\t\t         0. EXIT");
        printf("\n\n\n\t\t\tEnter your choice : ");
        scanf("%d", &tc);
        if(tc==0)
        {
            system("cls");
            selpag(un,pwd);
        }
        else
        {
            if(tc==1)
                printf("\n");
                //m51000(un,pwd);
            else if(tc==2)
                printf("\n");
                //m50200(un,pwd);
            else
                printf("\n");
                //m50700(un,pwd);
        }
    }
    else if(mc==6)
    {
        printf("\n\n\n\t\t\t\t      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
        printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
        printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
        printf("\t\t\t\t      \xdb\t\t\t   MOVIE 6      \t      \xdb\n");
        printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
        printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
        printf("\t\t\t\t      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
        printf("\n\n\n\t\t\t\t\t\t         1. 10:00AM\n\n\t\t\t\t\t\t         2. 02:30PM\n\n\t\t\t\t\t\t         3. 07:00PM\n\n\t\t\t\t\t\t         0. EXIT");
        printf("\n\n\n\t\t\tEnter your choice : ");
        scanf("%d", &tc);
        if(tc==0)
        {
            system("cls");
            selpag(un,pwd);
        }
        else
        {
            if(tc==1)
                printf("\n");
                //m61000(un,pwd);
            else if(tc==2)
                printf("\n");
                //m60200(un,pwd);
            else
                printf("\n");
                //m60700(un,pwd);
        }
    }
    else if(mc==0)
        system("cls");
}

void logpag()
{
    FILE *ud;
    ud=fopen("userdet.txt","r");
    int choice;
    char un[20], pwde[15], unf[20], pwdf[15];
    printf("\n\n\n\t\t\t\t      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
    printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
    printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
    printf("\t\t\t\t      \xdb\t\t\t     Login       \t      \xdb\n");
    printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
    printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
    printf("\t\t\t\t      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
    printf("\n\n\n\t\t\tEnter Username : ");
    scanf("%s", &un);
    while(fscanf(ud,"%s\t%s\n", unf, pwdf)!=EOF)
    {
        if(strcmp(un,unf)==0)
        {
            int x=1;
            printf("\t\t\tEnter password : ");
            scanf("%s", &pwde);
            if(strcmp(pwde,pwdf)==0)
            {
                break;
            }
            else
            {
                while(x)
                {
                    printf("\n\t\t\tWrong password, try again!\n");
                    printf("\t\t\tEnter password : ");
                    scanf("%s", &pwde);
                    if(strcmp(pwde,pwdf)==0)
                        break;
                    else
                        continue;
                }
            }
        }
        break;
    }
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t               LOGIN SUCCESSFUL\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t");
    system("pause");
    system("cls");
    selpag(un,pwde);
}

int regpag()
{
    struct loginfo a[100];
    int choice, x=1, otp, otpc;
    char un;
    printf("\n\n\n\t\t\t\t      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
    printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
    printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
    printf("\t\t\t\t      \xdb\t\t\t Registration       \t      \xdb\n");
    printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
    printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
    printf("\t\t\t\t      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
    printf("\n\n\n\t\t\tEnter Username : ");
    scanf("%s", &a[nou].username);
    while(x)
    {
        int i=0, j=0;
        char pwd1[15], pwd2[15];
        printf("\n\t\t\tEnter password(A-Z, a-z, 0-9, _) : ");
        while(pwd1[i-1]!='\r')
        {
            pwd1[i]=getch();
            if(pwd1[i]!='\r' && pwd1[i]!='\b')
            {
                printf("*");
            }
            i++;
        }
        printf("\n\t\t\tConfirm password : ");
        while(pwd2[j-1]!='\r')
        {
            pwd2[j]=getch();
            if(pwd2[j]!='\r')
            {
                printf("*");
            }
            j++;
        }
        if(strcmp(pwd1,pwd2)==0)
        {
            strcpy(a[nou].password,pwd1);
            break;
        }
        else
        {
            printf("\n\n\t\t\tERROR : PASSWORD CONFIRMATION DOESN'T MATCH PASSWORD\n");
        }
    }
    printf("\n\n\t\t\tOTP : ");
    int lower = 10000000, upper = 99999999, count = 1;
    srand(time(0));
    otp=printRandoms(lower, upper, count);
    while(x)
    {
        printf("\t\t\tEnter the OTP : ");
        scanf("%d", &otpc);
        if(otpc==otp)
        {
            break;
        }
        else
        {
            printf("\n\t\t\tOTP is invalid, Enter correct OTP\n\n");
            continue;
        }
    }
    FILE *ud=fopen("userdet.txt", "w+");
    fprintf(ud, "%s\t%s\n", a[nou].username, a[nou].password);
    fclose(ud);
    nou+=1;
    system("cls");
    printf("\n\n\n\n\n\n\n\t\t\t\t\t      REGISTRATION SUCCESSFULLY DONE");
    printf("\n\n\n\n\t\t\t\t\t             LOGIN TO PROCEED\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t");
    system("pause");
    system("cls");
    reglog();
}

void reglog()
{
    int choice;
    printf("\n\n\n\t\t\t\t      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
    printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
    printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
    printf("\t\t\t\t      \xdb\t\t\t    Tyk.it\t\t      \xdb\n");
    printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
    printf("\t\t\t\t      \xdb\t\t\t\t\t\t      \xdb\n");
    printf("\t\t\t\t      \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
    printf("\n\n\n\t\t\t1.New user? Sign up\n\t\t\t2.Already signed? Login\n\n\t\t\tEnter your choice : ");
    scanf("%d", &choice);
    if(choice==1)
    {
        system("cls");
        regpag();
    }
    else if(choice==2)
    {
        system("cls");
        logpag();
    }
}


void cp()
{
    printf("\n\n\n\n\n\t\t              =============================================================\n");
    printf("\t\t              =============================================================\n");
    printf("\t                 \t\t\t\t\t\t\t\t\t\n");
    printf("\t                 )\t\t\t\t\t\t\t\t       (\n");
    printf("\t\t\t\t\t=========================================       \t\n");
    printf("\t\t    ) \t\t\t||     MOVIE TICKET BOOKING SYSTEM     ||\t\t    (\n");
    printf("\t\t\t\t\t=========================================       \t\n");
    printf("\t            || \t\t\t\t\t\t\t\t\t\t   ||\n");
    printf("\t            || \t\t\t\t\t\t\t\t\t\t   ||\n");
    printf("\t            || \t\t\t\t\t\t\t\t\t\t   ||\n");
    printf("\t            || \t\t\t\t\t\t\t\t\t\t   ||\n");
    printf("\t            || \t\t\t\t\t\t\t\t\t\t   ||\n");
    printf("\t            || \t      \t\t BY\t\t\t\t\t\t\t   ||\n");
    printf("\t\t       \t\t\t\t\t\t\t\t\t\n");
    printf("\t\t    ) \t\t\t     SARAVANA GUHAN B   (21PC31)\t\t\t    (\n");
    printf("\t\t\t \t\t     JYOTHISH K S       (21PC17)  \t\t\t\n");
    printf("\t                 ) \t\t\tAKHIL S M       (21PC03)\t\t       (\n");
    printf("\t                   \t\t\t\t\t\t\t\t\t\n");
    printf("\t\t              =============================================================\n");
    printf("\t\t              =============================================================\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t");
    system("pause");
    system("cls");
    reglog();
}
void main()
{
    //dummy();
    cp();
}