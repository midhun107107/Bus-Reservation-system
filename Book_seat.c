#include "Book_seat.h"

int seats[100];
struct source_dest data;
void book(int seat_num )
{
   int i;

   int num_of_seats;

   printf("\n\n   Available Seats\n\n");
   bus_layout(seats);
   printf("Enter the number of seats want to book : \n");
   scanf("%d",&num_of_seats);

   printf("Enter the seat numbers : ");
   for(i=0;i<num_of_seats;i++)
   {
        scanf("%d",&seats[i]);
   }

   printf("\n\n");
    for(i=0;i<num_of_seats;i++)
   {
        printf("%d\n",seats[i]);
   }
   printf("\n\n");

}

void detele_booking(int user)
{

    strcpy(data.bus_name," ");
    strcpy(data.bus_num," ");
    strcpy(data.source," ");
    strcpy(data.destination," ");
    data.T_hour = 0;
    data.T_min = 0;

    for(int i=0;i<50;i++)
    {
        data.seats[i] = 0;
    }
     save_data(data,user );
     printf("\nBooking canceled\n");
}

