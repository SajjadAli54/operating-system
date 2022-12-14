#include "stdio.h"
#include "omp.h"
#include "unistd.h"
void main(){
    #pragma omp parallel sections
    {
        #pragma omp section
        {
            
            for(int i = 0;i< 5;i++){
                int id = omp_get_thread_num();
                printf("My Turn %d \n",id);
                sleep(1);
            }
        }

        #pragma omp section
        {
            
            for(int i = 0;i< 5;i++){
                int id = omp_get_thread_num();
                printf("Your Turn %d \n",id);
                sleep(2);
            }
        }
    }
}
