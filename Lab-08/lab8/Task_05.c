#include "stdio.h"
#include "unistd.h"
#include "fcntl.h"
#include "sys/stat.h"
#include "sys/types.h"
#include "string.h"
#include "stdlib.h"

void main(){
    int fd;
    char *mypipe = "my pipe";
    char *msg = "Hello World";
    char temp[80];

    mkfifo(mypipe,0666);

    pid_t pid = fork();

    if(pid == -1){
        perror("fork");
        exit(1);
    }
    else if(pid == 0){
        fd = open(mypipe,O_WRONLY);
        write(fd,msg,strlen(msg) + 1);
        close(fd);
    }
    else{
        fd = open(mypipe,O_RDONLY);
        read(fd,temp,sizeof(temp));
        puts(temp);
    }

}
