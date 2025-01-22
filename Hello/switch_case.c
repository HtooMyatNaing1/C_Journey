#include<stdio.h>

int main(){
    int input_val;

    printf("Enter a number: ");
    scanf("%d",&input_val);

    switch(input_val){
    case 1:
        printf("Input value is %d",input_val);
        break;
    case 2:
        printf("Input value is %d",input_val);
        break;
    default:
        printf("Input value is neither 1 nor 2.");
        break;
    case 3:
        printf("Input value is %d",input_val);
        break;
    }

    // Default case should be written as the last block for best practice.

    // switch case in C: it doesn't iterate over one by one in order, but it just find the match case using an efficient lookup mechanism. if no case is matched, default case is excuted


    return 0;
}
