#include <stdio.h>

int main(void){
    char name[50];
    printf("Hello! What is your name: ");
    scanf("%s", name);
    printf("Hello %s!", name);
}