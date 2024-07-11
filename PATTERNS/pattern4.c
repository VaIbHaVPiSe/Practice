/* Read input from STDIN. Print your output to STDOUT*/
#include<stdio.h>
int main(int argc, char *a[])
{
	int num;
	scanf("%i",&num);
	int k =65;
	for(int i =0; i<num ;i++){
		
		for(int j = 0;j<num;j++){
			printf("%c ",k);
		}
		k++;
		printf("\n");
	}
}
