/* Read input from STDIN. Print your output to STDOUT*/
#include<stdio.h>
int main(int argc, char *a[])
{
	int num;
	scanf("%i",&num);
	for(int i=5;i>0;i--){
		for(int j=num;j>=1;j--){
			printf("%i",i);
			printf(" ");
		}
		printf("\n");
	}
}
