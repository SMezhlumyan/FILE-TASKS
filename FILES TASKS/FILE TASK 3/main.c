#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#define BUF 1
#define ASSCII 127

int main(int argc, char* argv[]){

    int fd=open(argv[1],O_RDONLY);
    if (fd==-1)
    {
        perror("open");
        exit(EXIT_FAILURE);    
    }
    
    int readsize;
    char buf[BUF];
    int res[ASSCII]={0};
   while ((readsize=read(fd,buf,BUF) > 0))
   {    
        for(int i=0;i<readsize;i++){
            int ch=buf[i];
            res[ch]++;
        }
   }
   for (int i = 0; i <ASSCII; i++)
   {
    if (res[i])
    {
        printf(" %c->%d\n",i==10?'|':i,res[i]);
    }
    
   }
   
    

    return 0;
}