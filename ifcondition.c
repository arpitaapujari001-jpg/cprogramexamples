#include <stdio.h>
int main() {
	int a;
	printf("enter an integer value..");
	scanf("%d", &a);
	printf("User entered integer input as :");
	printf("%d", a);
	printf("\n");

	if(a==0) {
		printf("value of a is 0");
	}else {
		printf("value of a is not 0");
	}
	return 0;
}