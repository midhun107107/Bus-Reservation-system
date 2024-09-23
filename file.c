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


    if(data_len < 2)  // checking if len == 1
    {
      fputc(data,ftpr);
    }
    else
    {
      fputs(data,ftpr);
    }

    fclose(ftpr);


}
void copy_file(struct f_details f_data)//mode = write_char ,append_char
{

    write_file_data('\n',1,append_char);
    write_file_data(f_data.id,1,append_char);
    write_file_data('\n',1,append_char);
    write_file_data(f_data.username,sizeof(f_data.username),append_char);
    write_file_data('\n',1,append_char);
    write_file_data(f_data.password,sizeof(f_data.password),append_char);
    write_file_data('\n',1,append_char);
   // write_file_data(f_data.source,sizeof(f_data.source),write_char);
    //write_file_data(f_data.destination,sizeof(f_data.destination),write_char);
    //write_file_data(f_data.hour,sizeof(f_data.hour),write_char);
    //write_file_data(f_data.minute,sizeof(f_data.minute),write_char);
}

