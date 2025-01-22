#include<stdio.h>

int main(){
    int input_val;
    int val;
    val=9;
    printf("Enter a number: ");
    scanf("%d",&input_val);

    if(input_val > val){
        printf("%d is not a 1's digit.",input_val);
    }else if(input_val < 1){
        printf("%d is not a positive value.",input_val);
    }else{
        printf("%d is a 1's digit.",input_val);
    }

    return 0;
}

/*int main(){
    int input_val;
    int val;
    val=9;
    printf("Enter a number: ");
    scanf("%d",&input_val);

    if(input_val > val){
        printf("%d is not a 1's digit.",input_val);
    }else{
        printf("%d is a 1's digit.", input_val);
    }
    return 0;
}*/
