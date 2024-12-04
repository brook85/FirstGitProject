#include<stdio.h>

int add(int, int); 

int main(void){

	int num1, num2; 
	printf("enter num1, and num2 as( 2, 3): "); 
	scanf("%d, %d", &num1, &num2); 

	int addResult = add(num1, num2); 

	printf("%d + %d : %d\n", num1, num2, addResult); 

	return 0; 

}

int add(int n1, int n2){


	return n1 + n2; 
}



