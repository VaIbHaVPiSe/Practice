#include<stdio.h>
int main(){
    int num;
    scanf("%i",&num);
    for(int j=0;j<num;j++){
        for(int i=0;i<2*num;i++){
          if(i<num-j || i>num+j){
            printf(" ");
          }else
          printf("*");
        }
        printf("\n");
    }
}