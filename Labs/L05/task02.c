#include <stdio.h>
int main(){
int hour;
printf(" enter time in 24 hours format");
scanf(" %d", &hour);
if ( hour>= 5 && hour<=11)
{ 
printf(" Good Morning!");
}
else if( hour >=12 && hour<=18)
{
printf(" Good Evening!");
}
else if( hour >=18 && hour<=24)
{
printf(" Good Night!");
}
return 0;
}