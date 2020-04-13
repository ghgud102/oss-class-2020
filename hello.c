#include<stdio.>
int add(int x, int y){
	return (x+y);
}
int main(){
	int a = 10;
	int b = 2;
	int c = add(a,b);
	printf("a + b = %d \n",c);

	return 0;
}
