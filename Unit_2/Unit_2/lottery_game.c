#include<stdio.h>
#include<stdlib.h>

int main()
{
    int age=0; // int age; without initialization VS int age=0; with initialization. Use the second one for preventing further problems
    int id=0;
    int money=0;
    int cur_money=0;
    int number=0;
    int exit_key=0;

    printf("\nWelcome to our Game...");
    printf("\n- Enter your age:");
    scanf("%d",&age);

    if(age>17){
        while(1){
            printf("\n- Enter your ID:");
            scanf("%d",&id);
            printf("\nYour ID is %d.\n",id);

            while(id==111){
                printf("\n- Enter your money(must be more than 1000Ks):");
                scanf("%d",&money);
                cur_money+=money;
                printf("\nYour money is %dKs.\n",cur_money);

                while(cur_money>=1000){
                    printf("\n-Enter your guessed number:");
                    scanf("%d",&number);

                    if(number==123){
                        printf("\nCongratulations! You just won the lottery.\n");
                        cur_money+=1000;
                        printf("\nYour money is %dKs.\n",cur_money);
                    }else{
                        printf("\nSorry. Please try again.\n");
                        cur_money-=500;
                        printf("\nYour money is %dKs.\n",cur_money);
                    }

                    while(1){
                        printf("\nPress 1 to continue playing OR 0 to quit the game:");
                        scanf("%d",&exit_key);

                        if(exit_key==1){
                            printf("\n");
                            break;
                        }else if(exit_key==0){
                            printf("\nBye bye...");
                            exit(0);
                        }else{
                            printf("\nEnter either 1 or 0!\n");
                        }
                    }
                }
            }
        }
    }else{
        printf("\nSorry. You cannot play the game right now.");
    }

    return 0;
}
