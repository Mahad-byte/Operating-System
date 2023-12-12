#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main(){
int fd1[2],fd2[2],n,m;
char buffer[100];
pid_t p;
pipe(fd1);
pipe(fd2);
p=fork();
if(p>0){
close(fd1[0]); //close read end of pipe1
close(fd2[1]); //close write end pipe2
printf("passing values to child---->pipe1\n");
write(fd1[1],"Hello my child\n",15);
m=read(fd2[0],buffer,100);
write(1,buffer,100);
wait(NULL);
}
else{
close(fd1[1]); //close the write end of pipe1
close(fd2[0]);//close the read end of pipe2
n=read(fd1[0],buffer,100);
write(1,buffer,100);
printf("Passing values to parent--->pipe2\n");
write(fd2[1],"Hello my parent\n",15);
wait(NULL);
}
}

