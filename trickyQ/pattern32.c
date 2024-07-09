#include<stdio.h>
int main(){
    int num;
    scanf("%i",&num);
    int k=65;
    for(int i=num;i>0;i--){
        for(int j=0;j<num;j++){
            if(j<num-i){
                printf(" ");
            }else
            printf("%c",k+i-1);
        }
        printf("\n");
    }
}