#include<stdio.h>
int main(){
    int num;
    scanf("%i",&num);
    for(int i=num;i>0;i--){
        for(int j=0;j<i;j++){
            printf("%i ",i);
        }
        printf("\n");
    }
}