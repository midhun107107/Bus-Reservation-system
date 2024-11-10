#include"user.h"
#include<stdio.h>
#include "place.h"
int user_count = 0;
int temp_user_count;


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
                    temp_user_count = i;
                    return 'F';//user exist

                }
           }

    }
    return 'T';//not exist add to struct
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
void save_data(struct source_dest s,int user_num )
{
    strcpy(user_details[user_num].bus_name,s.bus_name);
    strcpy(user_details[user_num].bus_num,s.bus_num);
    strcpy(user_details[user_num].source,s.source);
    strcpy(user_details[user_num].destination,s.destination);
    user_details[user_num].T_hour = s.T_hour;
    user_details[user_num].T_min =s.T_min;

    add_seats_details_to_user_details(s,user_num); // saving seat details
}

void add_seats_details_to_user_details(struct source_dest s,int user_num )
{

    for(int i=0;i<50;i++)
    {
        user_details[user_num].seats[i] = s.seats[i];
    }
}

