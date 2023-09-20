#include <stdio.h>
int main ()
{
float light;
printf(" enter the value of light intensity from 1 to 1000");
scanf (" %f", &light);
if (light > 500)
{ 
printf ("it is exposed to the sunlight");
}
else if ( light>=100 && light <=500)
{
printf (" it is exposed to lighting");
}
else if ( light >= 0 && light <100)
{
printf(" it is evening");
}
else 
{
printf(" error");
}
return 0;
}


