#include<stdio.h>
#include"user.h"
//Login System: Users can access the system by entering their username and password
//Ticket Purchase: Logged-in individuals may reserve tickets for available buses by entering the bus number, their name, and age.
//The program allocates a seat number and decreases the number of available seats on the selected bus.
//Cancel Tickets: By entering their name, users can cancel their tickets.
//The program expands the number of available seats while removing the passenger entry.
//Checking Bus Status: Users may check the status of the bus they are currently scheduled to ride on.
//The program displays information such as the bus number, origin and destination, total number of seats, available seats, and fare.

void compare_usrname_password(char *,char *);
void create_account();
void create_username_password();
void login(char *,char *);
void bus_layout(int ,int);
void select_seat(int);
void main()
{

    while(1)
    {

        add_new_user();
        printf("debug\n");
    }
printf("Test\n\n");
create_username_password();
bus_layout(0,0);

}
void select_seat(int seat)
{



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

void login(char *username ,char *password )
{




}


void bus_layout(int a,int b)
{

 int i,j,count =0;
 int total_seats[10][4];



 for(i=0;i<10;i++)
 {
     for(j=0;j<4;j++)
     {
        count++;

        if(count<10)
        {
        printf("|_0%d_| ",count);
        }
        else
        {
        printf("|_%d_| ",count);
        }

     }
     printf("\n\n");
 }

}
