#include <stdio.h>
#include <string.h>

char bio[25] = "";
char username[25] = "";
char password[25] = "";
char option[25] = "";
char option1[25] = "[1]logout";
char option2[25] = "[2]add bio";
char option3[50] = "[3]reset username ";
char option4[50] = "[4]reset password";

void main1(){
    char username[] = "null and void";
    char password[] = "null and void";
    printf("[logged out all data has been deleted]\n");
}

void main2(){
    printf("what would you like your bio to be???");
    fgets(bio, 25, stdin);
    printf("here is you new bio:\n\n%s", bio);
    bio[strlen(bio)-1] = '\0';
}

void main3(){
    printf("what is your new username\n");
    fgets(username, 25, stdin);
    printf("%s is your new username",username);
}
void main4(){
    printf("what is your new password?\n");
    fgets(password, 25, stdin);
    printf("%s is your new password",password);
}

int main(){

printf("What is your username? ");
fgets(username, 25, stdin);
// logs input (I think)
username[strlen(username)-1] = '\0';
// removes whitespaces

printf("What is your password? ");
fgets(password, 25, stdin);
// logs input (I think)
password[strlen(password)-1] = '\0';
// removes whitespaces

printf("hello %s choose an option:\n%s\n%s\n%s\n%s\n",username, option1, option2, option3, option4);
fgets(option, 25, stdin);
// logs input (I think)
option[strlen(option)-1] = '\0';
// removes whitespaces

if (strcmp(option, "1") != 0 && strcmp(option, "2") != 0 && strcmp(option, "3") != 0 && strcmp(option, "4") != 0) {
        printf("[hey %s pick one of the 4 valid options]\n", username);
    }
     else if (strcmp(option, "1") == 0) {
        main1();
    } else if (strcmp(option, "2") == 0) {
        main2();
    } else if (strcmp(option, "3") == 0) {
        main3();
    }
     else if (strcmp(option, "4") == 0) {
        main4();
    }

return 0;
//idk what this does 
}