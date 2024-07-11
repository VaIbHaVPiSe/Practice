#include<stdio.h>
int main(){
    int num;
    scanf("%i",&num);
    for(int i= num ;i>0;i--){


        for(int j=num;j>num-i;j--){
            printf("%i ",j);
        }
        printf("\n");
    }
}