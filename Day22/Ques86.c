// Write a program to Count words in a sentence
#include <stdio.h>
int main(){
char str[200];
int i = 0, words = 0;
printf("Enter a sentence: ");
fgets(str, sizeof(str), stdin);
while (str[i] != '\0') {
if ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') &&
(str[i + 1] != ' ' && str[i + 1] != '\n' && str[i + 1] != '\t' && str[i + 1] != '\0')) {
words++;
}
i++;
}
if (i > 0 && str[0] != '\n')
words++;
printf("Number of words: %d\n", words);
return 0;
}