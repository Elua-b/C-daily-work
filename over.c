#include<stdio.h>
void main(){
	int number;
	printf("Enter the number : ");
	scanf("%d",&number);
	if (number%2==0){
		printf("The number is not prime");
	}
	else{
		printf("The number is  prime");
	}
	return 0;
}

