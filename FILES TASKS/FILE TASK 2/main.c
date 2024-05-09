#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#define BUF 1024

void EXIT(){
    printf("INVALID INPUT");
    exit(EXIT_FAILURE);
}
int main(){
     int action;
     printf("Overwriting-1 vs Appending-2 :");
     scanf(" %d",&action);
    
    size_t actionarr[2]={O_TRUNC,O_APPEND};
    
    action--;
    
    if (action < 0 || action > 1) {
        EXIT();
    }
    int fd=open("my_info.txt",actionarr[action]|O_RDWR);
    
    char buf[BUF];
    
    char Edit_Text[BUF];
    
    int res = read(fd,buf,BUF);

    printf("%s",buf);
    
    scanf("%s",Edit_Text);
    
    strcat(buf,Edit_Text);
    
    
    write(fd,Edit_Text,strlen(Edit_Text));
    

    return 0;
}
