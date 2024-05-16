#include <stdio.h>
#include <stdlib.h>

unsigned int decimal2binary(unsigned int);

int main()
{
    int data=0;
    printf("Enter number:");
    scanf("%d",&data);
    data = decimal2binary(data);

    printf("Hexadecimal: %x\n",data);
    return 0;
}

unsigned int decimal2binary(unsigned int demo)
{
    unsigned int answer=0;
    unsigned int temp_ans=0;
    unsigned char index=0;
    printf("Reverse bit stream: ");

    while(1 != (demo))
    {
        if((demo%2))
        {
            printf("1");
            answer |= (1<<index);   //setting bit
        }
        else
        {
            printf("0");
            answer &= ~(1<<index);  //resetting bit
        }
        demo = demo/2;
        index++;
    }
    printf("1");
    
    answer |= (1<<index);
    printf("\n");
    printf("Correct bit stream: ");
    temp_ans = answer;

    index++;
    while(index--)
    {
        int d=answer>>index;
        printf("%d",(d & 1));
        //answer = answer>>1;
    }
    printf("\n");
    return temp_ans;
}