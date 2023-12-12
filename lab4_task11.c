#include<stdio.h>
#include<stdlib.h>

int main(){
pid_t p = fork();
if(p == 0){
execl("/home/mahad/Documents/a.out", "myaddnum", NULL);
printf("This won't be printed");
perror("execl");
}
else{
wait(NULL);
printf("\nParent");
}
return 0;
}
