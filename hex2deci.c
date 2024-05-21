#include <stdio.h>
#include <stdlib.h>
 
long hex2deci(char *, int);
long power(int, int);
 
int main(){
    int count;
    char *input;
    printf("Enter count:");
    scanf("%d", &count);
    input = (char *)malloc((count + 1) * sizeof(char));
    printf("Enter hex data: 0x");
    scanf(" %s", input);
    long answer;
    answer = hex2deci(input, count);
    printf("Decimal: %ld\n", answer);
    free(input);
    return 0;
}
 
long hex2deci(char *data, int digits){
    long result;
    result = 0;
    digits--;
    while('\0' != *data){
        if(('0' <= *data) && ('9' >= *data))
            result += (*data - '0') * (power(16, digits--));
        else
            result += (*data - 55) * (power(16, digits--));
        data++;
    }
    return result;
}
 
long power(int base, int exponent){
    long out;
    out=1;
    for(int a=1;a<=exponent;a++)
        out *= base;
    return out;
}