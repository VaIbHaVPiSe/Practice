#include<stdio.h>
int main(){
    int num;
    scanf("%i",&num);
    int a=64;
    for(int i=0;i<num;i++){
        int k =1;
        for(int j=0;j<2*num;j++){
            
            if(j<num-i || j>num+i){
                printf(" ");
            }else
            printf("%c",a+k++);
        }
        printf("\n");
    }
}