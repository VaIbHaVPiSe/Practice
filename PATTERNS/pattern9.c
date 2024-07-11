/* Read input from STDIN. Print your output to STDOUT*/
#include<stdio.h>
int main(int argc, char *a[])
{
	int num;
	scanf("%i",&num);
    int x = 64 + num;
	for(int i =0; i<num ;i++){
		
		for(int j = 0;j<num;j++){
			printf("%c ",x);
		}
		x--;
		printf("\n");
	}
}
