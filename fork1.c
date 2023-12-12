#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>
int main(){
pid_t p;
printf("Before Forking\n");
p= fork();
if(p==0){
printf("I am Child Process and ID= %d\n",getpid());
printf("My parent process ID=%d\n", getppid());
}
else{
wait(NULL);
printf("My Child ID= %d\n",p);
printf("I am Parent and ID=%d\n",getpid());

}
}
