#include "omp.h"
#include "stdio.h"
int main(){

    #pragma omp parallel
    {
        #pragma omp for
        for(int i = 0;i<12;i++){
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}