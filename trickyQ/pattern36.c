#include<stdio.h>
int main(){
    int num;
    scanf("%i",&num);
    for(int i=0;i<num;i++){
        for(int j=0;j<2*num;j++){
            if(j<num-i || j>num+i){
                printf(" ");
            }else{
            printf("%i",2*i+1);
             }
        }
        printf("\n");
        
    }
}