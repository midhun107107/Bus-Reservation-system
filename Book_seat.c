#include "Book_seat.h"

void book(int seat_num )
{
   int seats[100],i;

   int num_of_seats;

   printf("\n\n   Available Seats\n\n");

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
        printf("%d",seats[i]);
   }
   printf("\n\n");
   bus_layout(seats);




}



