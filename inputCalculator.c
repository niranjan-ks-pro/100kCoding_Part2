#include <stdio.h>
int main(){
	printf("Input calculator\n");fflush(stdout);

	printf("Enter First number : \n");fflush(stdout);
	int a;
	scanf("\n%d", &a);

	printf("enter second number: \n");fflush(stdout);
	int b;
	scanf("\n%d", &b);

	int c;
	c = a+b;
    printf("%d + %d = %d\n", a, b, c);fflush(stdout);

    return 0;

}
