#include "stdio.h"
#include "unistd.h"
#include "sys/types.h"
#include "stdlib.h"
#include "string.h"

void main(){
    int fd[2], nbytes = 0;
    char string[] = "Hello World\n";

    // Creating un named pipe
    pipe(fd);

    pid_t child_pid = fork();

    if(child_pid == -1){
        perror("fork");
        exit(1);
    }

    if(child_pid == 0){
        close(fd[0]);

        write(fd[1],string, strlen(string) + 1);
        exit(0);
    }
    else{
        close(fd[1]);
        nbytes = read(fd[0],string,sizeof(string));

        puts(string);
    }


}