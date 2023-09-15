// author : Oluwademilade Ogunbajo
// Date: 12th of september 2023
// Change log: W2 ASSIGNMENT 




#include<stdio.h>

#include<conio.h>

int main()
{
	// The reason for key is to define the character given
	
	char cont;
	
     printf("A for left\N D for right\n T for Extra message\n y to exit the program\n enter one of the following:\n ");
	
	// while is beign used as a loop in the program
	
	while(1){
		if (_kbhit())
		// i used _kbhit is used to tell and check which key is pressed
		{
			
			cont = _getch();
			// this is used to read the key beign pressed and compare it to the other given keys go give out desired output
			
			if (cont == 'a')
			{printf("left\n");
			} 
			// this is telling us that there is an altenative output if one of the previous output is pressed
			else if (cont =='d'){
				printf("right\n");
			}
			
			else if (cont =='t')
			{printf("You just won a 150$\n");
			}
			
			else if (cont =='y')
			{
			  printf("exiting the program...\n");
			  break;	
			}
			
		
		
			}
			}
		
			
		
			
	
	
	

	
	return 0;
	    //end of program
		
}
