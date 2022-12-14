#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

void *myturn(void *args){
    while(1){
        sleep(1);
        printf("my turn \n");
    }
    return NULL;
}

void yourturn(){
    while(1){
        sleep(2);
        printf("your turn \n");
    }
}

int main(){
    pthread_t p;

    pthread_create(&p,NULL,myturn,NULL);
    yourturn();

    return 0;
}
