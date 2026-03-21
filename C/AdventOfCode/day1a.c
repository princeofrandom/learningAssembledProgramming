#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *fptr;
    char dir[1];
    char mystring[100];
    int direction = 0;
    int cursor;
    int sum = 0;

    int dial = 50;
    fptr = fopen("d1test.txt", "r");
    printf("%s", fgets(mystring, 3, fptr));


    return 0;
}