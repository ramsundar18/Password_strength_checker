#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int strength(char *password);
int caps(char *password);
int low(char *password);
int symbol(char *password);
int seq(char *password);

int pass_score(char *password){
    int score=0;
    score=strength(password)+caps(password)+low(password)+symbol(password)+seq(password);
    return score;
}
int strength(char *password){
    int c=0;
    for (int i=0;i<strlen(password);i++){
        c++;
    }
    printf("\nPassword has a length of %d characters",c);
    if(c>=8)
        
        return 1;
    else
        return 0;   
}
int caps(char *password){
    for (int i=0;i<strlen(password);i++)
        if(isupper(password[i])){
            printf("\nThe Password has a Uppercase");
            return 1;
        }
    printf("\nThe Password has no Uppercase");
    return 0;
}
int low(char *password){
    int c=0;
    for(int i=0;i<strlen(password);i++){
        if (islower(password[i])){
            c++;
        }
        if (c>=3){
            printf("\nThe Password has atleast 3 Lowercases");
            return 4;
        }
    }
    printf("\nThe Password didn't have atleast 3 Lowercases");
    return 0;
}

int symbol(char *password){
    for (int i=0;i<strlen(password);i++){
        if(ispunct(password[i])){
            printf("\nThe Password has a Symbol");
            return 1;
        }
    }
    printf("\nThe Password has no Symbol");
    return 0;
}

int seq(char *password){
    int d1,d2,d3,c=0;
    for (int i=0;i<strlen(password);i++){
        if(isdigit(password[i]))
            c++;
    }
    if(c>=3){
        for (int i=0;i<strlen(password)-2;i++){
            if(isdigit(password[i])){
                d1=password[i];
                if(isdigit(password[i+1])){
                    d2=password[i+1];
                    if(abs(d2-d1)==1 || abs(d2-d1)==0){
                        if(isdigit(password[i+2])){
                            d3=password[i+2];
                            if(abs(d3-d2)==1 || abs(d3-d2)==0){
                                printf("\nThe Password has sequence of 3 numbers");
                                return 0;
                            }
                            else{
                                continue;
                            }
                        }
                    }
                    else{
                        continue;
                    }
                }
                else{
                    continue;
                }
            }
            else{
                continue;
            }
        }
        printf("\nThe Password 3 non consecutive numbers");
        return 3;
    }
    else if(c==2){
        for (int i=0;i<strlen(password)-1;i++){
            if(isdigit(password[i])){
                d1=password[i];
                if(isdigit(password[i+1])){
                    d2=password[i+1];
                    if(abs(d2-d1)==1 || abs(d2-d1)==0){
                        printf("\nThe Password has sequence of 2 numbers");
                        return 0;
                    }
                    else{
                        printf("\nThe Password has 2 non consecutive numbers");
                        return 2;
                    }
                }
                else{
                    continue;
                }
            }
            else{
                continue;
            }
        }
    }
    else{
        printf("\nThe Password has less than 2 digits");
        return 0;
    }


}