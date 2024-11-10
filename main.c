#include"main.h"

char st[10] = "Midhun";

void main()
{
    init_bus();

    char user_input;

    printf("  BUS RESERVATION SYSTEM\n\n");
    //file_check();

    while(1)
    {
        user_input = user_input_data();

        switch(user_input)
        {
            case '1': add_new_user();
                      break;
            case '2': user_login();
                      break;
            case '3': if(user_loggedin_flag == 1)//Book my bus
                      {
                            select_source_destination();
                      }
                      break;
            case '4': if(user_loggedin_flag == 1)  // show layout
                      {
                            bus_layout(0);
                      }
                      break;
            case '5': user_loggedin_flag = 0;
                      printf("User LoggedOut!!\n");
                      break;
            case '6': if(user_loggedin_flag == 1)//Show My details
                      {

                            print_user_details(temp_user_count);
                      }
                      break;
            case '7': if(user_loggedin_flag == 1)//Show My details
                      {
                               detele_booking(temp_user_count);
                               print_user_details(temp_user_count);

                      }
                      break;
        }
    }

}



char user_input_data()
{
    char a;
    if(user_loggedin_flag == 0)
    {
        printf("Enter the option \n");
        printf("1 - New user\n2 - Login\n");
        scanf(" %c",&a);
    }
    else
    {
        printf("Enter the option \n");
        printf("3 - Book My Bus\n4 - Show Bus Layout\n5 - logout\n6 - Show My details\n7 - Cancel Booking\n");
        scanf(" %c",&a);
    }
    return a;
}
void file_check()
{
    FILE *ft;
    ft = fopen("data.txt","r");
    if(ft == NULL)//first time , create file
    {
        ft = fopen("data.txt","w");
    }
    fclose(ft);

}
void print_user_details(int count)
{
    printf("\n\n");
    printf("Bus name        :%s\n",user_details[count].bus_name);
    printf("Bus num         :%s\n",user_details[count].bus_num);
    printf("Bus Source      :%s\n",user_details[count].source);
    printf("Bus Destination :%s\n",user_details[count].destination);
    printf("Bus hour        :%d ",user_details[count].T_hour);
    printf("Bus Min         :%d\n",user_details[count].T_min);
    printf("\n\n");
    update_currectuser_seats(count);
    bus_layout(0);

}
void update_currectuser_seats(int count) // udating the global variable "seats[]"
{
    for(int i=0;i<50;i++)
    {
        seats[i] = user_details[count].seats[i];
    }

}



