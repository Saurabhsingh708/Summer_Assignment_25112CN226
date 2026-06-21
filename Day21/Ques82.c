// Write a program to Reverse a string
#include <stdio.h>
#include <string.h>
int main(){
char str[100], rev[100];
int i, length;
printf("Enter a string: ");
scanf("%s", str);
length = 0;
while (str[length] != '\0') {
length++;
}
for (i = 0; i < length; i++) {
rev[i] = str[length - i - 1];
}
rev[i] = '\0';
printf("Reversed string = %s\n", rev);
return 0;
}