#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main(){
pid_t p = fork();

if(p == 0)
{
wait(NULL);
printf("I am having pid %d and parent pid %d.\n", getpid(),getppid());
}
else if(p == 1)
{
printf("I am having pid %d.\n", getpid());
}
}

