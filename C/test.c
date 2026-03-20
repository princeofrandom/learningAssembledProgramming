#include <stdio.h>

int main() {
    printf("Hello, World!\n");

    char name[] = "Alice";
    int sum = 0;

    for(int i = 0; i < sizeof(name) - 1; i++) {
        if (name[i] == 'A' || name[i] == 'i') {
            printf("Found it!\n");
        }
    }

    return 0;

}