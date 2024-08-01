#include<stdio.h>
#include<string.h>
#include"passwordchecker.c"
#include<unistd.h>

int main(){
    char* pass;
    pass=getpass("Enter the Password :");

    printf("\nThe Rating for The Password %s is %d/10",pass,pass_score(pass));
    return 0;
}