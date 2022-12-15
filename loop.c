#include<stdio.h>
int sum(int num1,int num2){
	int add =num1+num2;
 printf("The sum is: %d",add);
	
}
int main(){
	int num1;
	int num2;
	printf("Enter the first number: \n");
	scanf("%d",&num1);
	printf("Enter the second number: \n");
	scanf("%d",&num2);
	return sum(num1,num2);

}

