#include "omp.h"
#include "stdio.h"
int main(){

    #pragma omp parallel
    {
        int id = omp_get_thread_num();
        printf("Hello %d \n",id);
        printf("World %d \n",id);
    }
    return 0;
}