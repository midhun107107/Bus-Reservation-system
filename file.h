#ifndef FILE_H
#define FILE_H
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define Myfile          "bus.txt"
#define write_char      0
#define append_char     1
#define wite_string     2
#define append_string   3



struct f_details{

    char id;
    char username[20];
    char password[20];
    char source[30];
    char destination[30];
    int hour;
    int minute;

};

struct f_details file_details;







void copy_file(struct f_details );
void create_new_file();
void write_file_data(char *data,int data_len,char mode);//mode = write_char ,append_char














#endif // FILE_H

/*
id:1
1 username : midhun
2 password : 12345
3 source : Karnataka
4 destination : kerala
5 hour: 22
6 min : 00

id:2
1 username : midhun
2 password : 12345
3 source : Karnataka
4 destination : kerala
5 hour: 22
6 min : 00

id:3
1 username : midhun
2 password : 12345
3 source : Karnataka
4 destination : kerala
5 hour: 22
6 min : 00
*/
