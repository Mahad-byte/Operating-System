#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
pid_t p;
int fd[2], bytesread;
pipe(fd);
char message[100];
char childread[100];
int arr[argc];
p = fork();
if(p == 0){
printf("child 1\n");
close(fd[1]); // write
bytesread = read(fd[0], childread, 100);
printf("Read argv %s\n", childread);
}
else if(p > 0){
printf("Parent\n");
close(fd[0]);
int index = 0;
for(int i = 1; i < argc; i++){
char *read = argv[i];
while(*read !='\0'){
message[index++] = *read++;
}
}
write(fd[1], message, 100);
}
//for(int i = 1; i < argc; i++){
//printf("%s\n", argv[i]);
//}

}
