#include<stdio.h>
int print(int x) {
	if(x==0) return 1;
	printf("%d\n",x);
	print(x-1);
	return 0;
}
int main() {
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	print(n);
}