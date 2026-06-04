#include <stdio.h>
int main() {
int num, original, reverse = 0, digit;
printf("Enter a number: ");
scanf("%d", &num);
original = num; 
while (num != 0) {
digit = num % 10;            
reverse = reverse * 10 + digit; 
num = num / 10;                
}
if (original == reverse)
printf("Number is a palindrome\n");
else
printf("Number is not a palindrome\n");
return 0;
}