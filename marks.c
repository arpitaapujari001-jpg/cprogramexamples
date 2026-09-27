#include <stdio.h>
int main() {
	int marks;
	printf("Enter your marks");	
	scanf("%d",&marks);
	
	printf("User entered marks as..%d",marks);
	printf("\n");

	if (marks>100 || marks<0) {
		printf("Given user input is wrong. Enter value between 0 and 100");
	} else if(marks>34){
		printf("He has passed the exam \n");
	}else {
		printf("He has failed the exam \n");
	}
	return 0;
}