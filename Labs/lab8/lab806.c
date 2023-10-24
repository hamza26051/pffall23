/*Name: HAMZA SHEIKH
Date: 10/24/23
Decription: determining max, min and sum of arrays
*/ 




#include <stdio.h>
#include <string.h>

void array(int size, int arr[size]){
int max=arr[0];
int sum=0;
for(int i=0; i<size; i++){
if(arr[i]>max){
max=arr[i];
}
}
printf("Max value is %d\n", max);
int min=max;
for(int i=0; i<size; i++){
if(arr[i]<min){
min=arr[i];
}
sum+=arr[i];
}
printf("Min value is %d\n", min);
printf("Sum is %d\n", sum);
}
int main() {
    int arr[5] = {4, 23, 67, 45, 23};
    array(5,arr);
    return 0;
}
