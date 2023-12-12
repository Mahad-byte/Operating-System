#include<stdio.h>
#include<stdlib.h>

int main(){

FILE* f;
f = fopen("task1.txt", "r");
if(f == NULL){
printf("Error");
exit(1);
}
else{
printf("opened\n");
}
//char data[100];
//printf("Enter: ");
//scanf("%s", data);
//fprintf(f, "%s", data);
//fgets(data, sizeof(data), stdin);
//puts(data);
//fprintf(f, "%s", data);


return 0;
}
