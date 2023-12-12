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
int largest = -1;
for(int i=0;i<argc;i++){
if(largest < numbers[i]){
largest = numbers[i];
}
}
int secondLargest = 0;
printf("\nlargest is: %d\n", largest);
for(int i = 0;i<argc;i++){
if(numbers[i] < largest && numbers[i] != largest && numbers[i] > secondLargest){
secondLargest = numbers[i];
}
}
printf("\n2 largest is: %d\n", secondLargest);
free(numbers);
}
