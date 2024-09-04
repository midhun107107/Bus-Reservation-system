#include"user.h"
#include<stdio.h>

int user_count = 0;



void add_new_user()
{

    char res;
    char buff1[50];
    char buff2[50];

    printf("Enter the user name :");
    scanf("%s",buff1);


    printf("\n");
    printf("Enter the password : ");
    scanf("%s",buff2);

    res = compare_user_if_exist(buff1,buff2);  // checking if user exists

    if(res == 'T')
    {
        strcpy(user_details[user_count].user_name,buff1);
        strcpy(user_details[user_count].user_password,buff2);
        user_count++;
    }
    else
    {
        printf("User already exist\n");
    }


}

char compare_user_if_exist(char *b1,char *b2)
{
    int i;
    for(i=0;i<user_count;i++)
    {
        if((char_cmp(b1,user_details[i].user_name)) == 0)
           {
                if(char_cmp(b2,user_details[i].user_password) == 0)
                {
                    return 'F';
                }
           }

    }
    return 'T';
}



int char_cmp(char *a,char *b)
 {
     int res;
     res = strcmp(a,b);
     return res;
 }


 void create_username_password()
{
    char name[100];
    char pwd[50];
    printf("Enter the user name : ");
    scanf("%s",&name);
//    strcpy(new_user_login.user_name,name);

    printf("Enter the new password : ");
    scanf("%s",&pwd);
//    strcpy(new_user_login.user_password,pwd);

}
