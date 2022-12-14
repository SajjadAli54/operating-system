/*
gcc cores.c -o core -fopenmp
./core

Increasing number of threads
export OMP_NUM_THREADS=4

Other constructs
#pragma omp parallel
            for
            sections
            section
            num_threads[2]
            task

*/

#include <stdio.h>
#include <omp.h>

int main(int argc, char *argv){
    //construct of openmp
    #pragma omp parallel
    {
        // This will be printed time which you have cores
        printf("I will execute the number of core times \n");
    }

    return 0;
}