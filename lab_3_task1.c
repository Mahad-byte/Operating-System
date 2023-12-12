#include<stdio.h>

int main(){

int num1 = 0, num2 = 0, num3 = 0;
printf("Enter side 1: ");
scanf("%d", &num1);
printf("Enter side 2: ");
scanf("%d", &num2);
printf("Enter side 3: ");
scanf("%d", &num3);

if(num1 == num2 && num1 == num3)
{
	printf("Equal\n");
}
else if(num1 != num2 && num1 != num3 && num2 != num3){
	printf("scalene\n");
}
else{
	printf("Isosceles\n");
}

return 0;
}
