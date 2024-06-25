#include<stdio.h>

void recursiv(int i){
    i++;
    printf("%d\n",i);
    if(i<100){
     recursiv(i);
    }
}

int main(void)
{
    recursiv(0);
}




