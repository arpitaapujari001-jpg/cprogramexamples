#include <stdio.h>
int main() {
	int a;

	printf("enter your age..");
	scanf("%d",&a);
	printf("users age is..");
	printf("%d", a);
	printf("\n");

	if (a>18) {
		printf("you are eligible to vote");
	}else {
		printf("you are not eligible to vote");
	}

	printf("\n");
	return 0;
}