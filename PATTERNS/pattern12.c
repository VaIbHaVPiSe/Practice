/* Read input from STDIN. Print your output to STDOUT*/
#include<stdio.h>
int main(int argc, char *a[])
{
	int num;
	scanf("%i",&num);
	
	for(int i =0; i<num ;i++){
		for(int j = 0;j<=i;j++){
			printf("%i ",i+1);
		}
		
		printf("\n");
	}
}
