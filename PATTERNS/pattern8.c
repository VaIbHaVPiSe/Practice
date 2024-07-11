/* Read input from STDIN. Print your output to STDOUT*/
#include<stdio.h>
int main(int argc, char *a[])
{
	int num;
	scanf("%i",&num);
	for(int i=num;i>0;i--){
		for(int j=num;j>=1;j--){
			printf("%i",j);
			printf(" ");
		}
		printf("\n");
	}
}
