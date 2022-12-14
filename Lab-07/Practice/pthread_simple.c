#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

void *my_thread(void *args){
    for(int i = 0;i<10;i++){
        printf("%d ", i);
        sleep(10);
    }
    printf("\n");
    return NULL;
}

int main(){
    printf("Before Thread \n");
    pthread_t thread;

    pthread_create(&thread,NULL,my_thread,NULL);
    pthread_join(thread,NULL);

    printf("After Thread \n");
    exit(0);
}