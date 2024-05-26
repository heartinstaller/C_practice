#include<stdio.h>
#include<stdlib.h>

typedef enum
{
    LEFT,
    RIGHT
}dir;

void rotate_array(int[], uint8_t, uint8_t, dir);

int main()
{
    // int test_array[5]={1,2,3,4,5};
    int no_of_elements;
    char dro;
    // uint8_t length_of_array = sizeof(test_array)/sizeof(test_array[0]);
    int st;
    dir direction;
    // Array Size
    printf("How many elements you want in a array: ");
    scanf("%d",&no_of_elements);
    int *test_array = (int *)malloc(no_of_elements * sizeof(int));

    if(NULL == test_array)
    {
        printf("memory init is failed\n");
        return 1;
    }else{}

    // Initialize array
    printf("Enter the elements one by one:\n");
    for(int a=0;a<(no_of_elements);a++)
        scanf("%d",&test_array[a]);

    // Stepping number
    printf("how many steps you want to rotate the array: ");
    scanf("%d",&st);

    printf("Do you want to left shift or right (L/l or R/r): ");
    scanf(" %c", &dro);
    // dr='R';
    
    if(('l' == dro) || ('L'== dro))
        direction = LEFT;
    else if(('r' == dro) || ('R'== dro))
        direction = RIGHT;
    else
    {
        printf("direction input is invalid\n");
        return 1;
    }

    rotate_array(test_array, no_of_elements, st, direction);

    printf("Array rotate finished\n");
    free(test_array);
    return 0;
}

void rotate_array(int arr[], uint8_t arr_size, uint8_t steps, dir where)
{
    
    int temp=0;
    for(int b=0;b<steps;b++)
    {
        if(LEFT == where)
        {
            temp = arr[0];
            for(int a=0;a<(arr_size-1);a++)
            {
                arr[a] = arr[a+1];
            }
            arr[arr_size-1] = temp;
        }
        else
        {
            temp = arr[arr_size-1];
            for(int a=(arr_size-1);a>0;a--)
            {
                arr[a] = arr[a-1];
            }
            arr[0] = temp;
        }
    }

    printf("Printing array:");
    for(int b=0;b<arr_size;b++)
    {
        printf("%d ",arr[b]);
    }
    printf("\n");
}