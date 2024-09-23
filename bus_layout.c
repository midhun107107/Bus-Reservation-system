#include "bus_layout.h"





void bus_layout(int a[])
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

