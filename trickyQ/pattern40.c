#include<stdio.h>
int main(){
    int num;
    scanf("%i",&num);
     int count =1;
    for(int i=0;i<num;i++){
       count=2*i+1;
        for(int j=0;j<2*num;j++){
            if(j<num-i || j>num+i){
                printf(" ");
                
            }else{
            printf("%i",count--);
            
            }
            
        }
        printf("\n");
        
    }
}