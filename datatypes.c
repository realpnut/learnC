#include <stdio.h>
#include <stdlib.h>

//1 byte of storage
char a = 65;

//2 bytes of storage
short b = 66;

//4 bytes of storage
int c = 67;

//depends on OS, usually 4 or 8 bytes of storage 
long d = 68;

//4 bytes decimal
float e = 3.14;

//8 bytes decimal
double f = 3.14159;

int main(){
    printf("Size of char: %zu bytes, Content: %d/%c\n", sizeof(a), a, a);
    printf("Size of short: %zu bytes, Content: %d/%c\n", sizeof(b), b, b);
    printf("Size of int: %zu bytes, Content: %d/%c\n", sizeof(c), c, c);
    printf("Size of long: %zu bytes, Content: %ld/%c\n", sizeof(d), d, d);
    printf("Size of float: %zu bytes, Content: %f\n", sizeof(e), e);
    printf("Size of double: %zu bytes, Content: %lf\n", sizeof(f), f);
    return 0;
}
