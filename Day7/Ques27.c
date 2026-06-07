// Write a program to Recursive sum of digits
#include <stdio.h>
int sumofdigits(int n) {
if (n == 0)
return 0;
else
return (n % 10) + sumofdigits(n / 10);
}
int main() {
int num;
printf("Enter a number: ");
scanf("%d", &num);
int result = sumofdigits(num);
printf("Sum of digits = %d", result);
return 0;
}