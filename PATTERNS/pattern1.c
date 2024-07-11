#include<stdio.h>

void recursiv(int i){
    
    for(int i = 0;i<=5;i++){
        for(int j = 0; j<=i;j++){
            if(j%2==0){
              printf("1");
            }else
            printf("0");
           
        }
        printf("\n");
    }
}

int main(void)
{
    recursiv(5);
}




