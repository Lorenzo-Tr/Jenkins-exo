#include <stdio.h>
#include <assert.h>

int addition(int a, int b){
	return a+b;
}

int main() {
	printf("test 1\n");
	int inputX=5;
	int inputY=6;
	int expectedValue=11;
	
	assert(addition(inputX,inputY)==expectedValue);
	printf("All test are good!\n");
	return 0;
}
