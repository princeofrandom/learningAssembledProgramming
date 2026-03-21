#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fptr;
    char dir[1];
    char mystring[100];
    int direction = 0;
    int cursor;
    int sum = 0;

    int dial = 50;
    fptr = fopen("d1test.txt", "r");
    // printf("%s", fgets(mystring, 100, fptr));
    printf("I started working");
    for (int i = 0; i < 1; i++)
    {
        // printf("%d\n", dial);
        if (strcmp(fgets(dir, 2, fptr),"R")) {
            direction = 1;
        } else {
            direction = 0;
        }
        cursor = strtol(fgets(mystring, 20, fptr),20,10);
        if (direction == 1) {
            printf("Move Right\n");
            printf("Cursor is now %d \n", cursor);
            for(int i = 0; i < cursor; i++) {
                dial++;
                if (dial == 100) {
                    dial = 0;
                }
                
                printf("%d\n", dial);
            }
            // printf("%s", cursor);
        }
        if (direction == 0) {
            printf("Move Left\n");
            // printf("Cursor is now %s \n", cursor);
            for(int i = 0; i < cursor; i++) {
                
                // printf("%d", *cursor);
                dial--;
                if (dial == -1) {
                    dial = 99;
                }
                printf("%d\n", dial);
                
            }
            // printf("%s", cursor);

        }
        if (dial == 0) {
            sum++;
        }
        printf("%d\n", dial);
    }
    printf("The dial pointed at 0 a total of %d times", sum);
}