#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char* argy[])
{
pid_t pid;
int status = 0;
printf("Hello World\n");
pid = fork();
if(pid<0)
{
printf("Error");
exit(-1);
}
else if(pid == 0)
{
printf("I am child process\n");
}
else{
wait(&status);
printf("I am parent process\n");
}

}
