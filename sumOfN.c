#include<stdio.h>
int t;
int sum(int x) {
	if(x<=9) return x;
	t=((x%10) + sum(x/10));
	return t;
}
int main() {
	int n;
	printf("Enter the n: ");
	scanf("%d",&n);
	sum(n);
	printf("%d",t);
}