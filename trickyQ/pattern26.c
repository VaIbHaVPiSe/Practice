#include<stdio.h>
int main(){
    int num;
    scanf("%i",&num);
    for(int i=0;i<=num;i++){
        for(int j =0 ; j<num; j++){
           if(j<num-i){
            printf("   ");// It is for if the position is less than the given input it print space upto it
           }else
            printf("%i   ",i+j-num+1);// if the position is  
        }
        printf("\n");
    }
}
/*
#include <stdio.h>


int main() {
    int rows;
    scanf("%i",&rows);

    for (int i = 1; i < rows; i++) {
        int num = 1;
        for (int j = rows; j > 0; j--) {
            if (j > i) {
                printf("  ");
            } else {
                printf("%d ", num);
                num++;
            }
        }
        printf("\n");
    }

    return 0;
}
*/
