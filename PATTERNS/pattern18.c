#include<stdio.h>
int main(){
    int num;
    scanf("%i",&num);
    int k =65;
    for(int i=num; i>0;i--){
        for(int j=0;j<i;j++){
            printf("%c ",k);

        }
        k++;
        printf("\n");
    }
}