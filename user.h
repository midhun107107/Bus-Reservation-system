

typedef struct new_user
{
    char user_name[100];
    char user_password[50];
    int user_id[100];

}user;

user user_details[100];
extern int user_count;


void add_new_user();
char compare_user_if_exist(char *,char *);
int char_cmp(char *,char *);
