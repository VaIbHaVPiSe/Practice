/*
#include<stdio.h>
int main(){
    int num;
    scanf("%i",&num);
    int k=65;
    for(int i=0;i<num;i++){
        for(int j =0;j<=num;j++){
         if(j<num-i){
            printf(" ");
         }else
         printf("%c",k+(i+j-num));
        }
       
        printf("\n");
    }
}
*/

#include<stdio.h>
int main(){
    int num;
    scanf("%i",&num);
    int k=65 ;
    for(int i=0;i<num;i++){
        int m=0;
        for(int j =0;j<=num;j++){
         if(j<num-i){
            printf(" ");
         }else
         printf("%c",k+m++);
        }
        
        printf("\n");
    }
}