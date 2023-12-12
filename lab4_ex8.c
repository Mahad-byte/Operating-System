#include<stdio.h>
int main(){
fork() || fork();
printf("UCP\n");
return 0;
}


//UCP fork() -> parent and child
//&& fork() -> parent fork didn't work as it returned 1 so false and child fork works so child process has another child process
//Hence 2 UCP from parent and child and 3 UCP is of child's child 
