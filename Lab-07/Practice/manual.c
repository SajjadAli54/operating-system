#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>

void *mythread(void *args){
    int *num = (int*)args;
    printf("%d \n", *num);
    return NULL;
}

int main(){
    int num = 23;
    pthread_t thread;
    pthread_create(&thread,NULL,mythread,&num);
    pthread_join(thread,NULL);

    return 0;
}