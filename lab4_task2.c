//This program just use fork and displays the IDs of the parent and child process
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
   pid_t pid;
printf("Hello World\n");
printf("Im the parent process & pid is: %d\n", getpid());
printf("Here I am before use of fork\n");
pid = fork();
   if (pid == 0){
      printf("Im the child process and pid is:%d\n", getpid());
   }
  else if (pid > 0){
      printf("Hello I m Parent and my PID is:%d\n",getpid());
}
   else{
      printf("Fork failed\n");
}
   return 0;
}
