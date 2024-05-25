#include <stdio.h>
#include <stdlib.h>

unsigned char charsearch(char *, char);

int main (){
    char *input;
    char key;
    input = malloc(50 * sizeof(char));

    printf("Enter string:");
    scanf(" %s", input);
    printf("Search char:");
    scanf(" %c", &key);

    unsigned char hit = 0;
    hit = charsearch(input, key);
    printf("Hit amount: %d\n", hit);

    return 0;
}

/*  Funtion takes char pointer and target char keycharecter as a input arguvment
*   and returns key charecter hit count 
*/
unsigned char charsearch(char *data, char target){
    char temp = '\0';
    unsigned char count=0;
    
    while('\0' != *data){
        temp = *data;
        if (target == temp)
            count++;
        data++;
    }
    return count;
}
