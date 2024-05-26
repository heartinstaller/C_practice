#include <stdio.h>
#include <stdlib.h>

int searchstr(char *, char *);

int main(){
    printf("String search within a string!\n");

    char *input;
    char *lookfor;
    input = malloc(50 * sizeof(char));
    printf("Enter sample string:");
    scanf(" %[^\n]", input);

    lookfor = malloc(10 * sizeof(char));
    printf("Search string:");
    scanf(" %[^\n]", lookfor);

    if(searchstr(input, lookfor))    
        printf("String found!\n");
    else
        printf("No trace \n");

    free(input);
    free(lookfor);
    return 0;
}

int searchstr(char *data, char *target){
    char temp = 0;
    char *first_mem = NULL;
    first_mem = target;
    while('\0' != *data){
        while(*data == *target){
            target++;
            data++;
            if('\0' == *target)
                return 1;
        }
        target = first_mem;
        data++;
    }
    return 0;
}
