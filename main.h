#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
#include"user.h"
#include"Book_seat.h"
#include"bus_layout.h"
#include"place.h"
#include"login.h"
#include"file.h"

char user_input_data();
void compare_usrname_password(char *,char *);
void create_account();
void create_username_password();
void login(char *,char *);
void bus_layout(int []);
void select_seat(int);



#endif // MAIN_H
