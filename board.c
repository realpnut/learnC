#include <stdio.h>
#include <stdlib.h>
//simple board examples, temperature for example
int temp[4]={
    19, 24, 20
};
int i = 4;
int t;
int avt = 0;

int main(){
    printf("Enter the temperature: ");
    scanf("%d", &t);
    temp[3] = t;

    while(i--){
        printf("%d\n", temp[i]);
    }
    for(i = 0; i < 4; i++){
        avt = avt + temp[i];
    }
    printf("Average temperature: %d\n", avt/(sizeof(temp)/sizeof(temp[0])));
    return 0;
}
