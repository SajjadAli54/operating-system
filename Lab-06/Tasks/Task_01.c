#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>

int main(){
    pid_t pid = fork();

    if(pid < 0){
        fprintf(stderr," Process Failed \n");
        return 1;
    }
    else if(pid == 0){
        printf("PIS = %d PPID = %d \n",getpid(),getppid());
    }
    else
    {
        printf("Parent Completed \n");
    }

    return 0;
}