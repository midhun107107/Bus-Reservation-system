#include "file.h"



void create_new_file()
{
    FILE *ftpr;

    ftpr = fopen(Myfile,"w");

    if(ftpr==NULL)
    {
        printf("Error creating the file!!!");
        return 1;
    }
    else
    {
        printf("File created successfully\n");
    }

    fclose(ftpr);
}
void write_file_data(char *data,int data_len,char mode)
{

    FILE *ftpr;

    if(mode == write_char)
    {
        ftpr = fopen("bus.txt","w");
    }


    if(mode == append_char)
    {
        ftpr = fopen("bus.txt","a");
    }



    if(ftpr==NULL)
    {
        printf("Error creating the file!!!");
        return 1;
    }
    else
    {
        printf("File created successfully\n");
    }


    if(data_len == <2)  // checking if len == 1
    {
      fputc(data,ftpr);
    }
    else
    {
      fputs(data,ftpr);
    }

    fclose(ftpr);



}
