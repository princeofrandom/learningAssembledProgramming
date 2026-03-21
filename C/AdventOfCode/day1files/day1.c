#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fptr;
    char *dir;
    char mystring[100];
    int direction = 0;
    int sum = 0;
    char *test;
    int dial = 50;
    int num = 0;
    fptr = fopen("inputd1.txt", "r");
    for (int i = 0; i < 4352; i++)
    {
        test = fgets(mystring, 20, fptr);
        dir[0] = test[0];
        test++;
        num = atoi(test);
        if (dir[0] == 'R') {
            // printf("Move Right %d \n", num);
            for (int i = 0; i < num; i++) {
                dial++;
                if (dial == 100) {
                    dial = 0;
                }
                if (dial == 0) {
                    sum++;
                }       
            }
        }
        if (dir[0] == 'L') {
            // printf("Move Left %d \n", num);
            for (int i = 0; i < num; i++) {
                dial--;
                if (dial == -1) {
                    dial = 99;
                }
                if (dial == 0) {
                    sum++;
                }
            }
        }
        // printf("%d\n", dial);
    }
    printf("The dial pointed at 0 a total of %d times \n", sum);
}