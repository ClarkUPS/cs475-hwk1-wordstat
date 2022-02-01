#include <stdio.h>
#include <string.h>
#include "stats.h"
#include "menu.h"

#define MAX_INPUT_LEN 128 /** maximum length of input users can enter */

/**
 * Main function
 * 
 * @param argc the number of command line arguments (ignore for this assignment)
 * @param argv an array of command line arguments (ignore for this assignment)
 */
int main(int argc, char **argv)
{
	char playerInput[MAX_INPUT_LEN]; //holds user-input string

	
	int option;
	while (option != 5)
	{
		int getOpp = getMenuOption(); //need to make sure that option is reset each time.
		option = getOpp; 
		
		 	if(option == 1){
				 
			 }else if(option == 2){
				 //int wordcount = updateWordCount(,playerInput); //what here?
				 //printf("The number of words are: %d", wordcount);
			 }else if(option == 3){

			 }else if(option == 4){

				char playerTempInput[MAX_INPUT_LEN];
				
				
				int flag = 0;
				int i = 0;
				while(flag == 0){

					for(i = 0; i < MAX_INPUT_LEN; i++){
						
						if(playerInput[i] == '#'|| playerInput[i] != '\0' || i == 128){
							flag = 1;
							break;
						}

					

					}
					scanf("%s" , playerTempInput);
					strcat(playerInput, playerTempInput); //combines the inputs
					printf("the sting is now:\n");
					printf("%s" , playerInput);	

				}
				

				// bool flag = true; //flag for if a # has been thrown
				 

			 }else if (option == 5){

			 }else{
				 printf("\nSorry please try another input\n");
			 }
		
	 }
	
	 

	


	printf("Exiting...\n");
	return 0;
}

//get!
