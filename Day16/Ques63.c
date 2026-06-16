// Write a program to Find pair with given sum
#include <stdio.h>
int main(){
int arr[] = {2, 4, 3, 5, 7, 8, 9};
int size = sizeof(arr) / sizeof(arr[0]);
int sum = 7;
int found = 0;
for (int i = 0; i < size; i++) {
for (int j = i + 1; j < size; j++) {
if (arr[i] + arr[j] == sum) {
printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
found = 1;
}}}
if (!found) {
printf("No pair found with given sum.\n");
}
return 0;
}