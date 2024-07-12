#include<stdio.h>
int main(){
    int num;
    scanf("%i",&num);
    int k=2*num -1;
    for(int i=num;i>0;i--){
        for(int j=1;j<=2*num ;j++){
            if(j<num-i+1 || j>num+i-1){
                printf(" ");
            }else
            printf("%i",k);
        }
        k=k-2;
        printf("\n");
    }
}