#ifndef PLACE_H
#define PLACE_H

#include<stdio.h>
#include"user.h"
#include "Book_seat.h"
struct local
{

    char data[100];
};

struct state
{
    char data[100];


};

struct source_dest
{
    char source[50];
    char destination[50];
    int T_hour;
    int T_min;
    char bus_name[20];
    char bus_num[10];
};

extern struct source_dest;
struct bus_time_24
{
    int Hour;
    int Min;
};

void select_source_destination();
//void print_struct(struct local,int size);



#endif // PLACE_H








