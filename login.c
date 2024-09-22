#include "login.h"


int user_loggedin_flag = 0;
void user_login()
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
    if(res == 'F')
    {

        user_loggedin_flag = 1;
        printf("User Login Success\n");
    }
    else
    {
        printf("User Login Failed!!!\nEnter correct username or password!!!\nor Sign Up!!!\n");
    }

}
char login_compare_user_if_exist(char *b1,char *b2)
{
    int i;
    for(i=0;i<user_count;i++)
    {
        if((char_cmp(b1,user_details[i].user_name)) == 0)
           {
                if(char_cmp(b2,user_details[i].user_password) == 0)
                {
                    return 'F';//user exist
                }
           }

    }
    return 'T';//not exist add to struct
}



int login_char_cmp(char *a,char *b)
 {
     int res;
     res = strcmp(a,b);
     return res;
 }


