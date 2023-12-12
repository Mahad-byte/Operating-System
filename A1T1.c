#include<stdio.h>
#include<unistd.h>

int main(char argc[]){
pid_t p;
p = fork();

if(p == 0){
printf("Im a child\n");
sleep(4);
}
else if(p > 1){
printf("Im a parent\n");
sleep(2);
}


}

