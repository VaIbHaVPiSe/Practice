#include<stdio.h>
int main(){
    int num;
    scanf("%i",&num);
    
    for(int i=0;i<num;i++){
        
        for(int j=0;j<2*num;j++){
            
            if(j<num-i || j>num+i){
                printf(" ");
            }else{
                if(num-j>0)
                printf("%i",num-j);
                else
                printf("%i",-1*(num-j));
            }
            
        }
        printf("\n");
    }
}