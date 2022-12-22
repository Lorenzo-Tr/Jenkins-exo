#include <stdio.h>
#include <assert.h>

int add(int a, int b){
	return a + b;
}

int main(){
	printf("Test add\n");
	
	int inputX=5;
	int inputY=5;
	int expectedValue=11;

	assert(add(inputX,inputY)==expectedValue);
	printf("All test are good ! \n");
	return 0;
}
