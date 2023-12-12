#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(int argc, char *argv[]){
printf("--------------------\n");
printf("PID of example1.c=%d\n",getpid());
char *args[]={"Hello", NULL};
execv("./example2",args);
printf("Back to example1.c\n");
}
