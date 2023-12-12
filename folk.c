#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main(){
pid_t p;
printf("Before fork\n");
p=fork();
if(p==0){
printf(" I am child having ID= %d\n",getpid());
printf("My Parent ID = %d\n",getppid());
}
else{
wait(NULL);
printf("My Child ID=%d\n",p);
printf("I am Parent and my ID=%d\n",getpid());
}
printf("Same\n");
}
