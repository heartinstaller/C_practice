#include <stdio.h>
#include <stdlib.h>

int decimal2bcd(unsigned int, int, int*);
int decimal2bcd_opti(unsigned int);
int digitsindecimal(unsigned int);

int main(){

    unsigned int    input;
    int     temp;
    int     count;
    // int     result[10];
    int     *result;
    printf("Enter number:");
    scanf("%d",&input);
    count = digitsindecimal(input);
    result = (int*)malloc(count * sizeof(int));

    printf("Number of digits:%d\n", count);

    decimal2bcd(input, count, result);
    // decimal2bcd_opti(input);
    free(result);
    printf("\n");
    return 0;
}

int decimal2bcd(unsigned int data, int digits, int answer[]){
    char i=3;
    int temp;
    int temp1;
    temp1= --digits;
    temp = data;
    while(0 != temp){
        answer[digits] = temp % 10;
        // printf("%d", answer[digits]);
        digits--;
        temp /= 10;
    }
    printf("\nBCD numbering:");
    digits=0;
    while(temp1 >= digits){ 
        while(0 <= i)
            printf("%d",((answer[digits] >> i--) & 1));
        digits++;
        i=3;
        printf("  ");
    }
    return 0;
}

int decimal2bcd_opti(unsigned int data){
    char    i=3;
    int     temp;
    int     ans;
    temp = data;
        while(0 != temp){
        ans = temp % 10;
        while(0 <= i)
            printf("%d",((ans >> i--) & 1));
        printf("\r  ");
        i=3;
        temp /= 10;
    }
    return 0;
}

int digitsindecimal(unsigned int    data){
    // Number of digits in a decimal
    int     count;
    int     temp;
    count=0;
    temp = data;
    while(0 != temp){
        temp /= 10;
        count++;    // number is digits stored in count variable
    }

    return count;
}