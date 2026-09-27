#include <stdio.h>
int main() {
int result;
	printf("Enter your marks..");
	scanf("%d", &result);
	printf("Your result is..%d", result);
	printf("\n");

	if (result>34) {
		printf("He has passed the exam");
	}else {
		printf("He has failed the exam");
	}
	return 0;
}