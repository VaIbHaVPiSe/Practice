#include<stdio.h>
int main(int argc, char *a[])
{
	int num;
	scanf("%i",&num);
	for(int i = num; i>=0;i--){
        
		for(int j = 1;j<=i;j++){
            
			printf("%i ",j);
            
          
		}
		
		printf("\n");
	}
}