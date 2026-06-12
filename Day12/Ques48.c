// Write a program to Write function for perfect number
#include <stdio.h>
int isPerfect(int num) {
int sum = 0;
for (int i = 1; i <= num / 2; i++) {
if (num % i == 0) {
sum += i;
}}
if (sum == num)
return 1;   
else
return 0;   
}
int main() {
int num;
printf("Enter a number: ");
scanf("%d", &num);
if (isPerfect(num))
printf("%d is a Perfect number.\n", num);
else
printf("%d is not a Perfect number.\n", num);
return 0;
}