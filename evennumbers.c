#include <stdio.h>
#include <stdlib.h>

int i = 1;

int main(){
    printf("numbers below 70 only\n\n\n");
    while(i<70){
        if(i%2 == 0){
            printf("even number: %d\n", i);
            
        }
        i = i * 2;
    }

    return 0;
}
