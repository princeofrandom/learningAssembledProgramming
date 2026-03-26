#include <stdio.h>
#include <stdlib.h>

int findFindBiggestNumber(int a);


int main() {

    long long int test = 9120391209310928309;
    printf("%i", findFindBiggestNumber(test));



    return 0;
}

int findFindBiggestNumber(int a) {
    int *b[sizeof(a)];
    int indexofb = 0;
    int testnum = 0;
    int lastnum = 0;
    // iterate through the entire length of the number, and append the highest digit
    // after finding that highest digit, search through the rest of the number and run it again

    for (int i = 0; i < sizeof(a); i++) {
        
        testnum = a % (10 ^ (sizeof(a) - i));
        if (testnum > lastnum) {
            lastnum = testnum;
        } 
    }
    return b;
}