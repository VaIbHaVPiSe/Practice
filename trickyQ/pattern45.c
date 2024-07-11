#include<stdio.h>
int main(){
    int num;
    scanf("%i",&num);
    int k=1;
    for(int i=0;i<num;i++){
        
        for(int j=0;j<2*num;j++){
            
            if(j<num-i || j>num+i){
                printf(" ");
            }else{
                if(num-j>0){
                printf("%i",k++);
                }else{
                printf("%i",k--);
                }
            }
            
        }
        printf("\n");
    }
}