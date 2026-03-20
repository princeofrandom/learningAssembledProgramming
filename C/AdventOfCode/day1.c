#include <stdio.h>

int main()
{
    FILE *fptr;
    char mystring[100];

    char* cursor;
    int sum = 0;

    int dial = 50;
    fptr = fopen("d1test.txt", "r");
    // printf("%s", fgets(mystring, 100, fptr));
    
    for (int i = 0; i < 1; i++)
    {
        printf("%d\n", dial);
        cursor = fgets(mystring, 20, fptr);
        if (cursor[0] == 'R') {
            cursor++;
            printf("Cursor is now %s \n", cursor);
            for(int i = 0; i < *cursor; i++) {
                dial++;
                if (dial == 100) {
                    dial = 0;
                }
                
                printf("%d\n", dial);
            }
            // printf("%s", cursor);
        }
        if (cursor[0] == 'L') {
            cursor++;
            printf("Cursor is now %s \n", cursor);
            for(int i = 0; i < int() cursor; i++) {
                printf("%d", *cursor);
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