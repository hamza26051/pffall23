#include <stdio.h>
int main()
{
char ch;
printf(" enter a character");
scanf(" %c", &ch);
int ascii_value= (int)ch;
printf(" the ASCII value of %c is %d", ch, ascii_value);
if ( ascii_value >= 97 && ascii_value <=122)
{
printf(" the characrter is a lowercase letter");
}
else if ( ascii_value >=65  && ascii_value <=90)
{
printf(" the characrter is a uppercase letter");
}
else if ( ascii_value >= 48 && ascii_value <=57)
{
printf(" the characrter is a digit");
}
else if( ascii_value >= 33 && ascii_value <=47)  
{     
printf(" the characrter is a special character");
}
else if ( ascii_value >= 58 && ascii_value <=64)
{
printf(" the characrter is a special character");
}
else if ( ascii_value >= 91 &&  ascii_value <=96)
{
printf(" the characrter is a special character");
}
else if ( ascii_value >= 123 && ascii_value <=126)
{
printf(" the characrter is a special character");
}

return 0;