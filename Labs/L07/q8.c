#include <stdio.h>
int main(){
int i=1;
int j=9;
int sum=0;
int array[9];
for (; i<=9; i++){
array[i]=j;
j--;
printf(" %d ", array[i]);
}
return 0;
}
