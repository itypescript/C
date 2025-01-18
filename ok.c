#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
int main(){

char username[25] = "";
char password[25] = "";
char option[25] = "";
char option1[25] = "option 1 ???";
char option2[25] = "option 2 ???";
char option3[25] = "option 3 ???";

printf("What is your username? ");
fgets(username, 25, stdin);
username[strlen(username)-1] = '\0';

printf("What is your password? ");
fgets(password, 25, stdin);
password[strlen(password)-1] = '\0';

printf("hello %s choose an option:\n%s\n%s\n%s\n",username, option1, option2, option3);
fgets(option, 25, stdin);
option[strlen(option)-1] = '\0';

if (strcmp(option, "option 1 ???") != 0 && strcmp(option, "option 2 ???") != 0 && strcmp(option, "option 3 ???") != 0);
{
printf("[hey %s pick one of the 3 valid options]\n", username);
}

return 0;

}
