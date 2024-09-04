#include"main.h"
//Login System: Users can access the system by entering their username and password
//Ticket Purchase: Logged-in individuals may reserve tickets for available buses by entering the bus number, their name, and age.
//The program allocates a seat number and decreases the number of available seats on the selected bus.
//Cancel Tickets: By entering their name, users can cancel their tickets.
//The program expands the number of available seats while removing the passenger entry.
//Checking Bus Status: Users may check the status of the bus they are currently scheduled to ride on.
//The program displays information such as the bus number, origin and destination, total number of seats, available seats, and fare.


void main()
{
    char user_input;



    while(1)
    {
        user_input = user_input_data();

        switch(user_input)
        {
            case '1': add_new_user();
                      break;
            case '2'://login();
                      printf("test");
                       break;
            case '3': bus_layout(0,0);
                      break;

        }
    }

}



char user_input_data()
{
    char a;
    printf("Enter the option \n");
    printf("1 - New user\n2 - Login\n3 - Show bus layout\n");
    scanf("%c",&a);

    return a;
}



