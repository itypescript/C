//this was the optomized version of ok.c by chatgpt

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char username[15] = "";
    char password[15] = "";
    char option[15] = "";

    printf("What is your username? ");
    fgets(username, 15, stdin);
    username[strlen(username) - 1] = '\0';

    printf("What is your password? ");
    fgets(password, 15, stdin);
    password[strlen(password) - 1] = '\0';

    printf("hello %s choose an option:\noption 1 ???\noption 2 ???\noption 3 ???\n", username);
    fgets(option, 15, stdin);
    option[strlen(option) - 1] = '\0';

    if (strcmp(option, "option 1 ???") != 0 && strcmp(option, "option 2 ???") != 0 && strcmp(option, "option 3 ???")) {
        printf("[hey %s pick one of the 3 valid options]\n", username);
    }
    
    return 0;
}
