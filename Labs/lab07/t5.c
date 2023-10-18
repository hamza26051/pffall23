/*  NAME: HAMZA SHEIKH
	DATE: 18/10/23
	DESCRIPTION: PRINTING A PATTERN
*/ 

#include <stdio.h>
int main(){
    
	for (int i=0; i<=20; i++){
		if(i<=2){
				printf("    *****\n");}
			else if(i==3){
			    printf(" ***********\n");
			}
		    else if(i==4){
		        printf("    *   *\n");
		    }
		    else if(i==5){
		        printf("      |\n");
		    }
		    else if(i==6){
		        printf("     \\_/\n");
		    }
		    else if(i==7){
		        printf(" \n");
		    }
		    else if(i==8){
		        printf("     | |\n");
		    }
		    else if (i==9){
		        printf("*************\n");
		    }
		    else if (i<=13){
		        printf("**  *****  **\n");
		    }
		    else if (i==14){
		        printf("    *****\n");
		    }
		    else if (i<=19){
		        printf("    ** **\n");
		    }
		    else {
		        printf(" ***** *****");
		    }
		}
		return 0;
	}

