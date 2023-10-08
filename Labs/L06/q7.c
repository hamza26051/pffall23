#include <stdio.h>
int main(){
int i=1;

int sum=0;
int array[9];
for (; i<=9; i++){
array[i]=i;
sum= sum +i;
printf(" %d ", array[i]);
}
printf("%d", sum);
return 0;
}
