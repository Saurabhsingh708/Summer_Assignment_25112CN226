// Write a program to Find diagonal sum
#include <stdio.h>
int main() {
int a[10][10];
int n, i, j;
int primarySum = 0, secondarySum = 0;
printf("Enter order of square matrix: ");
scanf("%d", &n);
printf("Enter elements of matrix:\n");
for(i = 0; i < n; i++) {
for(j = 0; j < n; j++) {
scanf("%d", &a[i][j]);
}}
for(i = 0; i < n; i++) {
primarySum += a[i][i];          
secondarySum += a[i][n - i - 1]; 
}
printf("Primary diagonal sum = %d\n", primarySum);
printf("Secondary diagonal sum = %d\n", secondarySum);
return 0;
}