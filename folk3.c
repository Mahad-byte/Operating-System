#include<stdio.h>
#include<unistd.h>
#include<sys/times.h>
#include<sys/wait.h>
int main(){
pid_t p;
printf("Before Folk\n");
p=fork();
if(p==0)
{
//sleep(5);
printf("I am Child,CID =%d\n",getpid());
printf("My Parent PID=%d\n", getppid());
printf("___________________\n");
}
else if (p>0){
//wait(NULL);
printf("I am parent, PID=%d\n",getpid());
wait(NULL);
printf("My Child, CID=%d\n",p);
printf("___________________\n");
}
else if(p<0){
printf("Folk is Fail\n");
}
printf("Same\n");
}
