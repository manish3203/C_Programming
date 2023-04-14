
#include <stdio.h>

void main() {

	int num;

	printf("Enter the Number :");
	scanf("%d",&num);

	printf("Your Number is : %d\n",num);

	if(num > 0) {
		printf("Your Number is Positive\n");
	}else if(num < 0){
		printf("Your Number is Negative\n");
	}else{
		printf("Your Number is Zero\n");
	}
}
