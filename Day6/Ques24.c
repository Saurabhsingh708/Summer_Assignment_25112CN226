// Write a program to Find x^n without pow()
#include <stdio.h>
int main(){
int x, n;
long long result = 1;
printf("Enter base and exponent: ");
scanf("%d %d", &x, &n);
while (n > 0) {
result *= x;
n--;
}
printf("Result: %lld", result);
return 0;
}