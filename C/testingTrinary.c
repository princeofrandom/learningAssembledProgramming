#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    char name[10];
    double gpa, age;
    double agelimit = 100;
    int tooOld;

    printf("Enter your name: ");
    fgets(name, sizeof(name) - 1, stdin);
    printf("%s", name);
    printf("Hi, %s! Enter your gpa: ", name);
    scanf("%lf", &gpa);
    printf("Enter your age: ");
    scanf("%lf", &age);

    tooOld = (age > agelimit) ? 1 : 0;

    switch(tooOld) {
        case 1:
        printf("You're too old!\n");
        break;
        case 0:
        printf("You're just right\n");
        break;
    }


    return 0;
}