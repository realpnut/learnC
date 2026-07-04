#include <stdio.h>
#include <stdlib.h>

int main(){
    int op;
    printf("super duper calculator\n");
    printf("1. add\n");
    printf("2. subtract\n");
    printf("3. multiply\n");
    printf("4. divide\n");
    printf("Choose an operation: ");
    scanf("%d", &op);
    if (op == 1){
        int a;
        int b;
        printf("enter first number: ");
        scanf("%d", &a);
        printf("enter second number: ");
        scanf("%d", &b);
        int c = a+b;
        printf("%d + %d = %d\n", a, b, c);
    }
    else if (op == 2){
        int a;
        int b;
        printf("enter first number: ");
        scanf("%d", &a);
        printf("enter second number: ");
        scanf("%d", &b);
        int c = a-b;
        printf("%d - %d = %d\n", a, b, c);
    }
    else if (op == 3){
        int a;
        int b;
        printf("enter first number: ");
        scanf("%d", &a);
        printf("enter second number: ");
        scanf("%d", &b);
        int c = a*b;
        printf("%d * %d = %d\n", a, b, c);
    }
    else if (op == 4){
        int a;
        int b;
        printf("enter first number: ");
        scanf("%d", &a);
        printf("enter second number: ");
        scanf("%d", &b);
        if (b == 0){
            printf("cannot divide by zero\n");
            return 1;
        }
        float c = (float)a/(float)b;
        printf("%d / %d = %.2f\n", a, b, c);
    }
    else{
        printf("invalid operation r u dumb\n");
    }

}
