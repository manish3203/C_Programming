
#include <stdio.h>

void main() {

	int num;

	printf("Enter Your Number :");
	scanf("%d",&num);

	printf("Your Number is : %d\n",num);

	if(num%5 == 0){
		printf("%d is divisible by 5\n",num);
	}else{
		printf("%d is not divisible by 5\n",num);
	}
}
