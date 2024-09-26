#include"main.h"

char st[10] = "Midhun";
void main()
{
    char user_input;
    /*file_details.id = '2';
    strcpy(file_details.username,"Midhun");
    strcpy(file_details.password,"Nmith@123");
    */
    //while(1)
    {

    //    book(1);
        //copy_file(file_details);
    //    while(1);
    }
    while(1)
    {
        user_input = user_input_data();

        switch(user_input)
        {
            case '1': add_new_user();
                      break;
            case '2': user_login();
                      break;
            case '3': if(user_loggedin_flag == 1)
                      {
                            select_source_destination();
                      }
                      break;
            case '4': if(user_loggedin_flag == 1)
                      {
                            bus_layout(0);
                      }
                      break;
            case '5': user_loggedin_flag = 0;
                      printf("User LoggedOut!!\n");
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
        printf("3 - Book My Bus\n4 - Show Bus Layout\n5 - logout\n");
        scanf(" %c",&a);
    }
    return a;
}



