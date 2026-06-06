// Write a program to Convert decimal to binary
#include <stdio.h>
int main() {
int num, i;
printf("Enter a decimal number: ");
scanf("%d", &num);
printf("Binary: ");
for (i = 31; i >= 0; i--){
int bit = (num >> i) & 1;
if (bit == 1 || i == 0) 
printf("%d", bit);
}
return 0;
}