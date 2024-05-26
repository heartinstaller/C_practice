#include <stdio.h>
//#include <conio.h>

void main()
{
    char charecter;
    charecter = 'A';
    char charArray[5];
    charArray[0] = '1';
    charArray[1] = '2';
    charArray[2] = '3';
    charArray[3] = '4';
    charArray[4] = '5';
    char* charpointer;
    
    printf("Hello world!\n\n");
    printf("asci data in char variable charecter: %c\n", charecter);
    printf("address of char varibale charecter: %x\n\n", &charecter);  

    printf("ascii data in char array varibale charArray[0]: %c\n", charArray[0]);    
    printf("ascii data in char array varibale charArray[1]: %c\n", charArray[1]);    
    printf("ascii data in char array varibale charArray[2]: %c\n", charArray[2]);    
    printf("ascii data in char array varibale charArray[3]: %c\n", charArray[3]);    
    printf("ascii data in char array varibale charArray[4]: %c\n\n", charArray[4]); 
    printf("base address of charArray: %x\n", &charArray);   
    printf("address of charArray[0]: %x\n", &charArray[0]);    
    printf("address of charArray[1]: %x\n", &charArray[1]);    
    printf("address of charArray[2]: %x\n", &charArray[2]);    
    printf("address of charArray[3]: %x\n", &charArray[3]);    
    printf("address of charArray[4]: %x\n\n", &charArray[4]);

    printf("address of charpointer: %x\n", &charpointer);    
    printf("hex deference data in charpointer: %x\n", *charpointer);
    printf("hex data in charpointer: %x\n", charpointer);    
    printf("char data in charpointer: %c\n", charpointer);
}