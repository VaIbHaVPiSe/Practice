#include<stdio.h>
int main(){
    int num;
    scanf("%i",&num);
    int k =66;
    for(int i=0;i<num;i++){
        for(int j=0;j<2*num;j++){
            if(j<num-i || j>num+i){
                printf(" ");
            }else
            printf("%c",k+2*i-1);
        }
        printf("\n");
    }

}