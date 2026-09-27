#include <stdio.h>

int main() {
	int a;

	printf("Enter a integer input..");
	scanf("%d", &a);	
	printf("User entered integer input as :");
	printf("%d", a);
	printf("\n");

	if(a==1) {
		printf("value of a is 1");
        }else {
		printf("value of a is not 1");
	}

	printf("\n");
	printf("End of ifelse condition");
	return 0;
}