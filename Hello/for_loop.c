#include<stdio.h>

int main(){

    /* for(initialization; condition; increment){
        code block here---
    }
    */

    for(int i=0; i<10; i++){
        printf("This is for loop %d.\n",i+1); // Adding one to make counting easier.
        getchar();
    }

    return 0;
}
