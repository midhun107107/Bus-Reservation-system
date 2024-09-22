#ifndef LOGIN_H
#define LOGIN_H

#include"user.h"

extern int user_loggedin_flag;
void user_login();
char login_compare_user_if_exist(char *,char *);
int login_char_cmp(char *,char *);




#endif // LOGIN_H
