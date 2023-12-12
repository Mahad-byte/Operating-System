#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main(){
pid_t p;
p=fork();
if(p==0){
printf("I am child having ID=%d\n",getpid());
printf("My parent ID=%d\n", getppid());
}
else if(p>0)
{
sleep(3);
printf("My Child ID=%d\n",p);
printf("I am Parent having ID=%d\n", getpid());
}
}
