
#include <stdio.h>

void main() {

	int num;

	printf("Enter Your Number :");
	scanf("%d",&num);

	printf("Your Number is : %d\n",num);

	if(num%2 == 0){
		printf("%d is an Even Number\n",num);
	}else{
		printf("%d is an Odd Number\n",num);
	}
}
