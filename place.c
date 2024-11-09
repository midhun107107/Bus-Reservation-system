#include "place.h"
#include"user.h"


char buff[30] = "midhun";
struct source_dest _source_dest;


struct bus_time_24 bus_time[]={


};

struct local karnataka[]= {
        "Bangalore",
        "Kempegowda",
        "Shantinagar ",
        "Mysore Bus Station",
        "Dharwad Bus Station",
        "Belagavi Bus Station",
        "Udupi Bus Station",
        "Mangaluru Bus Station"
};

struct local kerala[]= {
        "Thalassey",
        "Kannur",
        "Calicut ",
        "Wayand",
        "Ernakulam",
        "Kollam",
        "Idukki",
        "Thiruvananthapuram",
        "Idukki"
};

struct state states[] = {
    "KARANTAKA",
    "KERALA",
    "ANDRA",
    "TAMILNADU",
    "GOA"
};
void print_strct(struct local d[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {

        printf("%d.%s\n",i+1,d[i].data);
    }

}
void select_source_destination()
{
    int input;
    printf("TOOD : source and dest should not be same \n");
    printf("Select the Source from the list : \n\n");
    print_strct(states,sizeof(states)/sizeof(states[0].data));
    scanf("%d",&input);
    input-=1;

    strcpy(_source_dest.source,states[input].data);

    printf("Select the Destination from the list : \n\n");
    print_strct(states,sizeof(states)/sizeof(states[0].data));
    scanf("%d",&input);
    input-=1;

    strcpy(_source_dest.destination,states[input].data);

    printf("Select the Time : \n");
    printf("1 - 7:00\n2 - 8:00\n3 - 18:00\n4 - 19:00\n5 - 20:00\n6 - 21:00\n7 _ 22:00\n8 - 23:00\n");
    scanf("%d",&input);
    switch(input)
    {
        case 1 : _source_dest.T_hour = 7;
        break;
        case 2 : _source_dest.T_hour = 8;
        break;
        case 3 : _source_dest.T_hour = 18;
        break;
        case 4 : _source_dest.T_hour = 19;
        break;
        case 5 : _source_dest.T_hour = 20;
        break;
        case 6 : _source_dest.T_hour = 21;
        break;
        case 7 : _source_dest.T_hour = 22;
        break;
        case 8 : _source_dest.T_hour = 23;
        break;
        default : printf("Not available !!\nSelect any above timing \n"); printf("DEBUG _TODO -need to implement it in while loop ,if it come to default it should again ask user to enter timeing..\n");
        break;
    }

    printf("Select the Bus :\n");
    printf("1 - SRS Travels\n2 - Kallada Travels\n3 - KKN Travels\n4 - GreenLine Travels And Holidays\n5 - Kerala Lines\n6 - Royal Travels\n7 _ Suraj Holidays\n8 - Krs travels\n");
    scanf("%d",&input);
    switch(input)
    {
        case 1 :strcpy(_source_dest.bus_name,"SRS Travels" );
                strcpy(_source_dest.bus_num,"KA51 AA 9931" );
                break;
        case 2 :strcpy(_source_dest.bus_name,"Kallada Travels");
                strcpy(_source_dest.bus_num,"KA51 AA 4577" );
                break;
        case 3 :strcpy(_source_dest.bus_name,"KKN Travels" );
                strcpy(_source_dest.bus_num,"KA51 AA 2567" );
                break;
        case 4 :strcpy(_source_dest.bus_name,"GreenLine Travels And Holidays" );
                strcpy(_source_dest.bus_num,"KA51 AA 2254" );
                break;
        case 5 :strcpy(_source_dest.bus_name,"Kerala Lines" );
                strcpy(_source_dest.bus_num,"KA51 AA 5567" );
                break;
        case 6 :strcpy(_source_dest.bus_name,"Royal Travels" );
                strcpy(_source_dest.bus_num,"KA51 AA 8896" );
                break;
        case 7 :strcpy(_source_dest.bus_name,"Suraj Holidays");
                strcpy(_source_dest.bus_num,"KA51 AA 2587" );
                break;
        case 8 :strcpy(_source_dest.bus_name,"Krs travels" );
                strcpy(_source_dest.bus_num,"KA51 AA 4158" );
                break;
        default : printf("Not available !!\nSelect any above timing \n"); printf("DEBUG _TODO -need to implement it in while loop ,if it come to default it should again ask user to enter timeing..\n");
                break;

    }
    book(0);
    printf("User : %s\n",user_details[user_count-1].user_name); // user_counter is incremented after adding a new user , so decrementing from here
    print_source_destination(_source_dest);
    printf("  BOOKED SEATS  \n");
    bus_layout(seats);
    printf("\n\n");

    save_data(_source_dest,(user_count-1));


}

void print_source_destination(struct source_dest s)
{

    printf("Source      : %s\n",s.source);
    printf("Destination : %s\n",s.destination);
    printf("Hour        : %d\n",s.T_hour);
    printf("MIn         : 00\n",s.T_min);
    printf("Bus Name    : %s\n",s.bus_name);
    printf("Bus Num     : %s\n",s.bus_num);

}


