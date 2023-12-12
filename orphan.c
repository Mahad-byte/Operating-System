#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
int main(){
pid_t p;
p=fork();
if(p==0)
{
sleep(12);
printf("I am Child Process , CID=%d\n",getpid());
printf("My paprent Process CID=%d\n",getppid());
}
else if(p>0){
sleep(3);
printf("My Child CID=%d\n",p);
printf("I am parent ,PID=%d\n", getpid());

}
}
