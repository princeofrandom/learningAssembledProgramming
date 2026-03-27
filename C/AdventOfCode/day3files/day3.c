#include <stdio.h>
#include <stdlib.h>

void findBiggestNumber(int* a, int* b, int imax, int startindex);
void loadBigNum(int* a, FILE* filepointer, int imax);



// 2712233521522212239633525221424223292522332923342263323223226223332531222232333293222213262324223122
// Above is first number in my test input, and it's 100 characters long

int main() {

    int test[15];
    int ret[2];
    char testval[1];
    FILE *fptr;
    fptr = fopen("inputd3.txt", "r");
    int arraylen = 15;
    
    printf("%d\n", arraylen);

    for (int i = 0; i < arraylen; i++)
    {
        test[i] = atoi(fgets(testval, 1, fptr));
    }

    for(int i = 0; i < arraylen; i++)
    {
        printf("%d", test[i]);
    }
    
    printf("\nMade it here \n");
    findBiggestNumber(test, ret, arraylen - 1, 1);
    printf("\nMade it here \n");
    for(int i = 0; i < 2; i++)
    {
        printf("%d", ret[i]);
    }
   

    


    return 0;
}



//find the biggest number in a string
//find the biggest number after that string
//find the biggest number after that
//so on

void findBiggestNumber(int* a, int* b, int imax, int startindex) {
    int indexofb = 0;
    int indexofmax = 0; //make a counter value for the index of b
    int maxDigit = a[0]; // first check for big number goes here
    int lastnum = 0; // then it goes here, so we can compare it to other numbers


    
    // iterate through the entire length of the number, and append the highest digit
    // after finding that highest digit, search through the rest of the number and run it again
    for(int i = startindex; i < imax; i++) // i indexes through every value of the first array, my "long number"
    {
        if (a[i] > maxDigit)
        {
            b[indexofb] = maxDigit;
            maxDigit = a[i];
            indexofmax = i;
        }
        b[indexofb] = maxDigit;
        findBiggestNumber(a, b, imax, i);
    }
}