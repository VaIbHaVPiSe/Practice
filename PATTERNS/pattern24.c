#include<stdio.h>
int main(){
    int num;
    scanf("%i",&num);
    for(int i=0;i<=num;i++){
        for(int j=0;j<num;j++){
            if(j<num-i){
                printf(" ");
            }else
             printf("*");
        }
        printf("\n");
    }
}