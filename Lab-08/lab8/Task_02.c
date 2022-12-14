#include "stdio.h"
#include "omp.h"
#include "unistd.h"
void main(){
    #pragma omp parallel sections
    {
        #pragma omp section
        {
            for(int i = 0;i< 5;i++){
                printf("My Turn %d \n",i);
                sleep(1);
            }
        }

        #pragma omp section
        {
            for(int i = 0;i< 5;i++){
                printf("Your Turn %d \n",i);
                sleep(2);
            }
        }
    }
}