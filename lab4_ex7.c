#include<stdio.h>
int main(){
fork() && fork();
printf("UCP\n");
return 0;
}


//UCP fork() -> parent and child
//&& fork() -> parent fork works and creates another child of parent so now it has 2 childs, child's fork doesn't works as child returned 0 and 0 is false in && so child doesn't has anything its just a lonely child.
//Hence 2 UCP from parent and child and 3 UCP is of parent's second child 
