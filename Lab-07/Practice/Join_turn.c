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

void *yourturn(void *args){
    for(int i = 0;i<3;i++){
        sleep(2);
        printf("your turn \n");
    }
    return NULL;
}

int main(){
    pthread_t p[2];

    pthread_create(&p[0],NULL,myturn,NULL);
    pthread_create(&p[1],NULL,yourturn,NULL);

    pthread_join(p[0],NULL);
    pthread_join(p[1],NULL);

    return 0;
}