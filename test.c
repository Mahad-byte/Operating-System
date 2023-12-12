#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdio.h>
int main(){
pid_t p;
p=fork();
if(p==0)// child process
{

printf("I am child having ID=%d\n",getpid());
printf("My Parent process ID=%d\n",getppid());
}
else if(p>0)
{
wait(NULL);
sleep(3);
printf("I am parent having ID=%d\n",getpid());
printf("My Child Process ID=%d\n",p);
}
}
