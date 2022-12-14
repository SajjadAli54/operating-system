#include "stdio.h"
#include "unistd.h"
#include "sys/types.h"
#include "stdlib.h"
#include "string.h"

void main(){
    int number = 122;
    int fd[2];

    char anum[5];

    pipe(fd);

    pid_t child_pid;

    if((child_pid = fork()) == -1){
        perror("fork");
        exit(1);
    }

    if(child_pid == 0){
        close(fd[0]);

        sprintf(anum,"%d",number * 4);
        write(fd[1],anum,strlen(anum) + 1);
        exit(0);
    }
    else{
        close(fd[1]);
        read(fd[0],anum,sizeof(anum));
        printf("%s \n",anum);
    }


}