//Alphabet or not

#include <stdio.h>

void main() {

	char ch;
	
	printf("Enter the Character : ");
	scanf("%c",&ch);

	if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'){
		printf("%c is an Alphabet\n",ch);
	}else{
		printf("%ch is Not an Alphabet\n",ch);
	}
}
