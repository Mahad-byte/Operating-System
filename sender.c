#include<stdio.h>
#include<stdlib.h>
#include<sys/shm.h>
#include<string.h>
//sender
int main(){

char buffer[100];
void *shared_memory;
int shmid = shmget((1234), 1024, 0666 | IPC_CREAT);
printf("The shmid= %d", shmid);
shared_memory = shmat(shmid, NULL, 0);
printf("The process attached at %p\n", shared_memory);
printf("Enter data\n");
read(0, buffer, 100);
strcpy(shared_memory, buffer);
printf("\nYou have wrote= %s", (char*)shared_memory);
}
