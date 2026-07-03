#include <stdio.h>
#include <stdlib.h>
//just playing with if statements
int main(){
    char name[26];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("\n");
    printf("Enter your age: ");
    int age;
    scanf("%d", &age);
    printf("Hello %s, you are %d years old.\n", name, age);
    return 0;
}
