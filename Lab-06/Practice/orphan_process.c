#include<stdio.h>
#include<unistd.h>

int main(){
    pid_t pid = fork();

    printf("Process is starting \n");
    if(pid == 0){
        sleep(5);
        printf("I am the child process having pid %d \n",getpid());
        printf("My parent pid is %d \n",getppid());
    }
    else{
        printf("I am the parent process having pid %d \n",getpid());
        printf("My child pid is %d \n",pid);
    }

    return 0;
}