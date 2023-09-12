#include <stdio.h>
#include <math.h>
int main(){
int y1;
int date01;
int month01;
int y2;
int date02;
int month02;
printf(" enter dob of first person");
scanf(" %d %d %d", &y1, &date01, &month01);
printf(" enter dob of second person");
scanf(" %d %d %d", &y2, &date02, &month02);
if (y2< y1 || y2==y1 && month02<month01 || y2==y1 && month02==month01 &&  date02<date01){
printf(" second person is older");
}
else if ( y2==y1 && month02==month01 &&  date02==date01){
printf(" both are of same age");
}
else{
printf(" first person is older");
}
return 0;
}
