#include<stdio.h>

//Login System: Users can access the system by entering their username and password
//Ticket Purchase: Logged-in individuals may reserve tickets for available buses by entering the bus number, their name, and age.
//The program allocates a seat number and decreases the number of available seats on the selected bus.
//Cancel Tickets: By entering their name, users can cancel their tickets.
//The program expands the number of available seats while removing the passenger entry.
//Checking Bus Status: Users may check the status of the bus they are currently scheduled to ride on.
//The program displays information such as the bus number, origin and destination, total number of seats, available seats, and fare.

void compare_usrname_password(char *,char *);
void create_account();
void create_username_password(char *,char *);
void login(char *,char *);
void bus_layout(int ,int);
void main()
{

printf("Test\n\n");
bus_layout(0,0);

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
