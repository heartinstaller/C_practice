/* This code contains two parts
Both the below functions can swap data of 
two varibales with call by ref method.
a. swap_optimised: swap without use of third varibale
b. swap: convensional method
*/
#include <stdio.h>

void swap_optimised(int *, int *);
void swap(int *, int *);

int main()
{
    int     first=11;
    int     second=22;

    swap(&first, &second);
    printf("%d, %d", first, second);
    
    return 0;
}

// This function call swaps to varibale data without use of third varibale
// Call by ref
void swap_optimised(int *one, int *two){
    *two = *one + *two;
    *one = *two - *one;
    *two = *two - *one;
}

// swap with call by ref
void swap(int *one, int *two){
    int temp;
    temp = *one;
    *one = *two;
    *two = temp;
}