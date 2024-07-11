#include<stdio.h>
int main(){
    int num;
    scanf("%i",&num);
    int k =64+num;
    for(int i=num;i>0;i--){
        for(int j=num;j>num-i;j--){
            printf("%c",k);
        }
        k--;
        printf("\n");
    }
}