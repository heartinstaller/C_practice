#include <stdio.h>
#include <stdlib.h>

int bcd2decimal(char *, int);
int power(int, int);


int main(){
    int digits;
    char *bcd_input;
    printf("Enter length:");
    scanf("%d",&digits);
    bcd_input = (char *)malloc((digits + 1) * sizeof(char));
    printf("Enter BCD number:");
    scanf(" %[^\n]", bcd_input);
    int result;
    result = bcd2decimal(bcd_input, digits);
    printf("Decimal: %d\n", result);

    free(bcd_input);
    return 0;
}

int bcd2decimal(char *data, int length){
    int temp=0;
    int nib=0;
    int bcd=0;
    int nibble;
    nibble = 3;
    
    // printf("ASCI:");    
    // for(int a=0;a<=10;a++)
    //     printf("%d", data[a]);
    // printf("\n");    

    while('\0' != *data){

        while(0 <= nibble){
            // printf("%c", *data);
            temp = *data - '0';
            // printf("temp %d\n",temp);
            bcd += temp * power(2, nibble--);
            data++;
        }
        // bcd += nib;
        // printf("small:%d", bcd);    
        nibble = 3;
        data++;
        // printf("\n");    
    }
    return bcd;
}

int power(int base, int exponent){
    int pow;
    pow = 1;
    for(int i=1;i<=exponent;i++)
        pow *= base;
    return pow;
}