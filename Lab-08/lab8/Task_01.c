#include <omp.h>
#include <stdio.h>
int main(int argc, char *argv){

    int sum = 0;
    #pragma omp parallel
    {
        #pragma omp for
        for(int i = 0;i<6;i++){
            sum += i;
        }
    }
    printf("Sum = %d \n",sum);
    
    return 0;
}