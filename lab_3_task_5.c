#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv){
int index = 1;
int *numbers = (int*)malloc(sizeof(int)*argc);
for(int i = 1; i<argc; i++){
numbers[index++] = atoi(argv[i]);
}
for(int i = 1;i<argc;i++){
printf("%d", numbers[i]);
}
free(numbers);
}
