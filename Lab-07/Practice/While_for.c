#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

void *myturn(void *args){
    for(int i = 0; i< 10; i++){
        sleep(1);
        printf("my turn \n");
    }
    return NULL;
}

void yourturn(){
    for(int i = 0;i<3;i++){
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