#include<stdio.h>
#include"user.h"
#include"Book_seat.h"
#include"bus_layout.h"
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
        bus_layout(0,0);
        add_new_user();
        printf("debug\n");
    }
printf("Test\n\n");
create_username_password();
bus_layout(0,0);

}





