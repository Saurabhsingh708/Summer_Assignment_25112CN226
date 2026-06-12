// Write a program to Write function to find factorial
#include <stdio.h>
int factorial(int n) {
int fact = 1;
for (int i = 1; i <= n; i++) {
fact = fact * i;
}
return fact;
}
int main() {
int num, result;
printf("Enter a number: ");
scanf("%d", &num);
result = factorial(num);
printf("Factorial = %d\n", result);
return 0;
}