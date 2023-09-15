// Author : Oluwademilade Ogunbajo
// Date: 12th of September 2023-09
// Change log: Assignment W2

#include<stdio.h>

int main()
{
	 // cont is used to define the char..	 
	 char cont;
	 
	 while(1){
	 
     printf("A for left\N D for right\n T for Extra message\n y to exit the program\n enter one of the following:\n ");
	 	scanf(" %c", &cont);
	 	// scanf is to  read a character input from the user
	 	
	 	
	 		if (cont == 'a')
			{printf("left\n");
			}
		
			// the if and else statement is a conditione
			  
			else if (cont =='d'){
				printf("right\n");
			}
			
			else if (cont =='r'){
				printf("right\n");
			} 
			else if (cont =='t')
			{printf("you Love cake!!\n");
			}
			
			else if (cont =='y')
			{
			  printf("exiting the program...\n");
			  break;	
		 }
	 
	 	
	 	
		
			}
	 
	 
   
   
    return 0;
}
        //end of program
