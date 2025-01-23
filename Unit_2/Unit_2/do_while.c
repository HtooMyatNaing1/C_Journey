#include<stdio.h>
#include<stdlib.h>

int main()
{
    int input_val;

    printf("Enter a number:");
    scanf("%d",&input_val);

    do{
        printf("%d\n",input_val);
        input_val--;
    }while(input_val>0);

    // do while works at least once

    return 0;
}
