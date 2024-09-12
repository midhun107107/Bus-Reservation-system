#include "place.h"


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

    print_source_destination(_source_dest);



}

void print_source_destination(struct source_dest s)
{

    printf("Source      : %s\n",s.source);
    printf("Destination : %s\n",s.destination);
    printf("Hour        : %d\n",s.T_hour);
    printf("MIn         : %d\n",s.T_min);

}


