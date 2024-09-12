#include "place.h"


char buff[30] = "midhun";
/*state states[] = {
    KARANTAKA,
    KERALA,
    ANDRA,
    TAMILNADU,
    GOA
};
*/
//local kerala[20];
//local karnatak[20];
struct local karnataka[]= {
        "Bangaore",
        "Kempegowda",
        "Shantinagar ",
        "Mysore Bus Station",
        "Dharwad Bus Station",
        "Belagavi Bus Station",
        "Udupi Bus Station",
        "Mangaluru Bus Station",
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
};




void select_source_destination()
{


    //strcpy(kerala[0].data,buff);
    printf("%s",kerala[0].data);
    printf("Select the Source from the list : ");
    //print_struct(&kerala.data[0],sizeof(kerala)/sizeof(kerala.data[0])));


}

void print_struct(char *data,int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        printf("%c",*data);
        data++;
    }

}
