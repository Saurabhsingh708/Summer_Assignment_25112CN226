// Write a program to Write function for armstrong
#include <stdio.h>
int power(int base, int exp) {
int result = 1;
for(int i = 0; i < exp; i++)
result *= base;
return result;
}
int isArmstrong(int num) {
int original = num, remainder, result = 0, n = 0;
while (original != 0) {
original /= 10;
n++;
}
original = num;
while (original != 0) {
remainder = original % 10;
result += power(remainder, n);
original /= 10;
}
return (result == num);
}
int main() {
int num;
printf("Enter a number: ");
scanf("%d", &num);
if (isArmstrong(num))
printf("%d is an Armstrong number.\n", num);
else
printf("%d is not an Armstrong number.\n", num);
return 0;
}