#ifndef USER_H
#define USER_H


typedef struct new_user
{
    char user_name[100];
    char user_password[50];
    int user_id[100];
    int seats[50];
    char source[50];
    char destination[50];
    int T_hour;
    int T_min;
    char bus_name[20];
    char bus_num[20];


}user;

user user_details[100];
extern int user_count;
extern int temp_user_count;

void add_new_user();
char compare_user_if_exist(char *,char *);
int char_cmp(char *,char *);


//void save_data(struct source_dest ,int );

#endif // USER_H





