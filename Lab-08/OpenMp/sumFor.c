#include "omp.h"
#include "stdio.h"
int main(){
    int sum = 0;
    omp_set_num_threads(9);
    #pragma omp parallel
    {
        int id = omp_get_thread_num();
        #pragma omp for
        for(int i = 0;i<4;i++){
            sum += i;
            printf("%d %d \n",id,i);
        }
    }
    printf("sum = %d\n",sum);
    return 0;
}