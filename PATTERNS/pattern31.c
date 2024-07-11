#include<stdio.h>
int main(){
    int num;
    scanf("%i",&num);
    for(int i=num ;i>0;i--){
        int k =1; 
        for(int j=0;j<num;j++){
            if(j<num-i){
                printf(" ");
            }else
            printf("%i",k++);
        }
        printf("\n");
    }
}