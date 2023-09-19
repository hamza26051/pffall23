#include <stdio.h>
int main(){
char ch;
printf(" are you sure to delete? \n");
printf (" yes or no \n");
scanf("%c",& ch);
switch( ch){
case 'y':
printf (" Deleted successfully");
break;
case 'Y':
printf (" Deleted successfully");
break;
case 'N':
printf (" Delete Canceled");
break;
case 'n':
printf (" Delete Canceled");
break;
default:
printf (" error");
break;
}
return 0;
}
