#include <stdio.h>

int main() {
	int a;
	printf("enter your marks..");
	scanf("%d", &a);
	printf("your marks are..");
	printf("%d", a);
	printf("\n");

	if (a>34 && a<51) {
		printf("you have passed the exam");
	}else if (a>50 && a<70) {
		printf("you have passed with first class");
	}else if (a>69) {
		printf("you have passed with distinction");
	}else {
		printf("you have failed");
	}

	return 0;
}