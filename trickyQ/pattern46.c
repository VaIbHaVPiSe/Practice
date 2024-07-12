#include<stdio.h>
int main(){
    int num;
    scanf("%i",&num);
    int a =64;
    for(int i=0;i<num;i++){
        int k=1;
        for(int j=0;j<2*num;j++){
            
            if(j<num-i || j>num+i){
                printf(" ");
            }else{
                if(j>0 && j<=num){
                printf("%c",a+k++);
                }else{
                printf("%c",--k-1+a);
                }
            }
            
        }
        printf("\n");
    }
}

