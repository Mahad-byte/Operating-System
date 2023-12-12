#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<sys/wait.h>
#include<sys/types.h>

int main() {
    int fd1[2],fd2[2] , s, n;
    pid_t p;
    char buffer[100];
    pipe(fd1);
pipe(fd2);
p = fork();

if(p>0){
close(fd1[0]);
close(fd2[1]);
printf("P send data\n");
write(fd1[1], "Hello",5);
s = read(fd2[0], buffer, 100);
write(1, buffer, 100);
wait(NULL);
}
else{
close(fd1[1]);
close(fd2[0]);

n = read(fd1[0], buffer, 100);

}
}
