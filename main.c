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
		option = getMenuOption(); //need to make sure that option is reset each time.
		printf("Option : %d", option);

		 	if(option == 1){
				 
			 }else if(option == 2){
				 int wordcount = updateWordCount(,playerInput); 
				 printf("The number of words are: %d", wordcount);
			 }else if(option == 3){

			 }else if(option == 4){
				 
				 
				 	char playerTempInput[MAX_INPUT_LEN];
					 printf("\n\ntime to take a reading\n\n");

					 fgets(playerTempInput,10,stdin); //get full line

					 strcat(playerInput, playerTempInput); //combines the inputs
					 printf("finished reading line ");



				 int flag = 0; //flag for when # charter has been spotted.
				 while(flag == 0){

					 int i = 0;
					 while(playerInput[i] != '\0' && i < MAX_INPUT_LEN){ //while the string is not at the end, check all charters 
						
						if(playerInput[i] == '#'){ //if trigger charter "#" is found trigger stop
							flag = 1;

						}


					 }
					 char playerTempInput[MAX_INPUT_LEN];
					 printf("\n\ntime to take a reading\n\n");

					 fgets(playerTempInput,MAX_INPUT_LEN,stdin); //get full line

					 strcat(playerInput, playerTempInput); //combines the inputs
					 printf("finished reading line ");


				 }           
				
				 

			 }else if (option == 5){
				
			 }else{
				 printf("\nSorry please try another input\n");
			 }
		
	 }
	
	printf("Exiting...\n");
	return 0;
}


