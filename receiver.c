#include<stdio.h>
#include<stdlib.h>
#include<sys/shm.h>

int main(){

char buffer[100];
void *shared_memory;
int shmid = shmget((1234), 1024, 0666);
printf("The shmid= %d", shmid);
shared_memory = shmat(shmid, NULL, 0);
printf("The process attached at %p\n", shared_memory);
printf("\nYou have wrote= %s", (char*)shared_memory);
}
