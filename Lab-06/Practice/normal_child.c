#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(){
    pid_t pid = fork();

    printf("Process is satrting \n");
    if(pid == 0){
        printf("I am the child process having pid %d \n",getpid());
        printf("My parent pid is %d \n",getppid());
        printf("%d \n",pid);
    }
    else{
        printf("I am the parent process having pid %d \n",getpid());
        printf("My child pid is %d \n",pid);
    }

    return 0;
}