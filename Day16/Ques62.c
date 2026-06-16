// Write a program to Find maximum frequency element
#include <stdio.h>
int main(){
int arr[] = {1, 3, 2, 1, 4, 1, 3, 3, 3};
int size = sizeof(arr) / sizeof(arr[0]);
int maxCount = 0, element;
for (int i = 0; i < size; i++) {
int count = 1;
if (arr[i] == -1)  
continue;
for (int j = i + 1; j < size; j++) {
if (arr[i] == arr[j]) {
count++;
arr[j] = -1;  
}}
if (count > maxCount) {
maxCount = count;
element = arr[i];
}}
printf("Maximum frequency element = %d\n", element);
printf("Frequency = %d\n", maxCount);
return 0;
}