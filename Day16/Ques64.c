// Write a program to Remove duplicates from array
#include <stdio.h>
int main(){
int arr[] = {1, 2, 2, 3, 4, 3, 5};
int size = sizeof(arr) / sizeof(arr[0]);
int temp[size];
int newSize = 0;
for (int i = 0; i < size; i++) {
int isDuplicate = 0;
for (int j = 0; j < newSize; j++) {
if (arr[i] == temp[j]) {
isDuplicate = 1;
break;
}}
if (!isDuplicate) {
temp[newSize] = arr[i];
newSize++;
}}
printf("Array after removing duplicates:\n");
for (int i = 0; i < newSize; i++) {
printf("%d ", temp[i]);
}
return 0;
}