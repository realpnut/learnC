#include <stdio.h>
#include <stdlib.h>

int i = 0;

int main(){
    printf("Counting to 100... (press any key to continue)\n");
    getchar();
    while(i < 100){
        printf("%d\n", i);
        i = i+1;
    }
    printf("%d\n", i);
    printf("Done!\n");
}
