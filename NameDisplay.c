#include<stdio.h>

int main(){

    char name[100];
    printf("Enter your Name: ");
    scanf("%[^\n]s", name); //to read full line
    //gets(name);
    printf("Hello %s",name);
    return 0;
}
