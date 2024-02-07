#include<stdio.h>
int sum(int n) {
    if(n==1) return 1;
    int res = n + sum(n-1);
    return res;
}
int main() {
    int n;
    printf("Enter the number n: ");
    scanf("%d",&n);
    printf("%d is the ans.",sum(n));
    return 0;
}