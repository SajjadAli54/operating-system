#include "stdio.h"
#include "omp.h"
void main(int argc, char *argv){
    int sum = 0;

    #pragma omp parallel for
        for(int i = 0;i<4;i++){
            sum += i;
        }

    printf("sum = %d \n",sum);
    
}