#include<stdio.h>
#include<stdlib.h>

unsigned int decimal2hex(unsigned int);

int main()
{
    unsigned int data;
    printf("Enter decimal number:");
    scanf("%d",&data);

    decimal2hex(data);

    return 0;
}

unsigned int decimal2hex(unsigned int demo)
{
    unsigned int temp;
    unsigned char *answer;
    temp = demo;
    while(0!=temp<16)
    {
        if(16<(temp%16))
        {
            *answer = (temp%16) + '0';           
        }
        else
        {
            switch (temp%16)
            {
                case 10:
                {
                    *answer = 'A'; 
                }
                break;
                case 11:
                {
                    *answer = 'B';
                }
                break;
                case 12:
                {
                    *answer = 'C';
                }
                break;
                case 13:
                {
                    *answer = 'D';
                }
                break;
                case 14:
                {
                    *answer = 'E';
                }
                break;
                case 15:
                {
                    *answer = 'F';
                }
                break;
                default:
                break;
            }
        }
        answer++;
    }
    *answer = '\0';
    answer++;
    printf("Printing string:%s",answer);
    return 0;
}