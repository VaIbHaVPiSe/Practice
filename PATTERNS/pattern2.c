#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              	                  // Reading input from STDIN
	printf("Input number is %d.\n", num);   
	for(int i=1;i<=num;i++){
		for(int j=1;j<=num;j++){
			if(i==1 || i==num){
				printf("*");
			}else{
				if(j==num-i+1){
				printf("*");
			}else{
				printf(" ");
			}
			}
		}
		printf("\n");
		
	}    // Writing output to STDOUT
}

/* 
num = 5

*****
   *
  *
 *
*****


*/