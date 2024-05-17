#include <stdio.h>

int decimal2hex(unsigned int, char*);

int main()
{
    unsigned int input;
    int index;
    char result[20];
    printf("Enter number\n");
    scanf("%d", &input);
    index = decimal2hex(input, result);
    for(int j = index-1;j>=0;j--)
        printf("%c",result[j]);
    return 0;
}

int decimal2hex(unsigned int data, char *ans)
{
    int index=0;
    unsigned int temp;
    while(0 != data)
    {   
        temp = data % 16;
        if(10 > temp)
            ans[index++] = '0' + temp;
        else
            ans[index++] = 55 + temp;
        data /= 16;
    }
    return index;
}