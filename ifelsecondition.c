#include <stdio.h>
int main() {
	int a;
	printf("enter an integer value");
	scanf("%d", &a);
	printf("user entered integer value as");
	scanf("%d",a);
	printf("\n");
	
	if(a==1) {
		printf("value of a is 1");
        }else {
		printf("value of a is not 1");
	}
	
	return 0;
}