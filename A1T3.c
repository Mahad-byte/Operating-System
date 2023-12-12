#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<sys/wait.h>
#include<sys/types.h>

int main() {
    int fd[2], s;
    pid_t p;
    char buffer[100];
    pipe(fd);
p = fork();

if(p>0){
printf("P send data\n");
write(fd[1], "Hello",5);
}
else{
printf("C receives data\n");
s = read(fd[0], buffer, 100);
write(1, buffer, s);
}
}
