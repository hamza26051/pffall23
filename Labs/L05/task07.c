#include <stdio.h>
int main(){
float price;
float saved;
float final;
float discount;
printf (" enter the price");
scanf(" %f", &price);
if ( price>=2000 && price<= 4000){
discount=20;
}
else if (price>=4001 && price<= 6000)
{
discount=30;
}
else if ( price>6000)
{
discount=50;
}
else {
printf (" the price is %f" , price);
}
saved= price * ( discount/100);
final= price - saved;
printf (" saved amount is %f", saved);
printf (" final amount is %f", final);
printf (" saved price is %f", price);
return 0;
}