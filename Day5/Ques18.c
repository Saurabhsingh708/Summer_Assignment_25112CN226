// Write a program to Check strong number.
#include <stdio.h>
int factorial(int n) {
int i, fact = 1;
for(i = 1; i <= n; i++) {
fact = fact * i;
}
return fact;
}
int main() {
int num, temp, remainder, sum = 0;
printf("Enter a number: ");
scanf("%d", &num);
temp = num;
while(temp != 0) {
remainder = temp % 10;
sum = sum + factorial(remainder);
temp = temp / 10;
}
if(sum == num) {
printf("%d is a Strong Number.\n", num);
} else {
printf("%d is not a Strong Number.\n", num);
}
return 0;
}