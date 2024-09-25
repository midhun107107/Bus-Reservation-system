#include "bus_layout.h"





void bus_layout(int a[])
{

 int i,j,count =0;
 int total_seats[10][4];

 int k,f = 0;

 for(i=0;i<10;i++)
 {
     for(j=0;j<4;j++)
     {
        count++;

        for(k=0;k<40;k++)
        {
            if(seats[k]== count)
            {
                f= 1;
                break;
            }
        }
        if(f == 0)
        {
            if(count<10)
            {

                printf("|_0%d_| ",count);
            }
            else
            {

                printf("|_%d_| ",count);
            }
        }
        else
        {
            f= 0;
            printf("|____| ",count);
        }

     }
     printf("\n\n");
 }

}

