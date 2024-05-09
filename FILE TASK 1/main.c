#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#define BUF 1024
int main(int argc,char* argv[]){
    
     char buf[BUF];
     int fd=open(argv[1],O_RDONLY);
     int fdc=open(argv[2],O_TRUNC|O_CREAT|O_WRONLY,777);

        if (fd==-1||fdc==-1)
        {
            printf("WRONG ADRESS\n");
            perror("open");
            exit(EXIT_FAILURE);
        }
     ssize_t readsize;

     while ((readsize=read(fd, buf, BUF))>0){
        write(fdc,buf,readsize);
     }
     

    



}
