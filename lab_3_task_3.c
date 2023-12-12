#include<stdio.h>
#include<stdbool.h>
void swap(int* a, int* b){
int temp = *a;
*a = *b;
*b = temp;
}

void bubbleSort(int arr[],int size){
bool swapped;
for(int i = 0;i<size-1;i++){
swapped = false;
for(int j = 0;j<size-i-1;j++){
if(arr[j]>arr[j+1]){
swap(&arr[j], &arr[j + 1]);
swapped = true;
}
}
if(swapped == false){
break;
}
}
}
int main(){
int arr[20] = {0};
printf("Enter arr\n");
for(int i=0;i<20;i++){
scanf("%d", &arr[i]);
}
printf("Before\n");
for(int i=0;i<20;i++){
printf("%d \n", arr[i]);
}
printf("after\n");
bubbleSort(arr, 20);
for(int i=0;i<20;i++){
printf("%d \n", arr[i]);
}

}
