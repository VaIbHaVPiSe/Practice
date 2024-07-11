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


/*
#include<stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int count = 1;

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num - i - 1; j++) {
            printf("  ");
        }
        for (int j = count; j > 0; j--) {
            printf("%d ", j);
        }
        printf("\n");
        count += 2;
    }

    return 0;
}

*/