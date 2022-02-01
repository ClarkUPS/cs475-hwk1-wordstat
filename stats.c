
#include "stats.h"
#include <stdio.h>
#include <string.h>

/**
 * Initializes the statistics structure
 * @param st an uninitialized WordStats struct
 * @return an initialized WordStats struct 
 */
WordStats initStats(WordStats st)
{
	// TODO initialize all fields in the st struct before returning it
	//int histo[ALPHABET_SIZE];
	//int wordCount = 0;
	//int vowelCount = 0;
	//int consonantCount = 0;
	return st;
}

/**
 * Updates vowels and consonants in the struct
 * @param st WordStats structure
 * @param input the user-input string
 * @return an updated WordStats struct 
 */
WordStats updateVowelCons(WordStats st, const char str[])
{
	// int vowelCountT = 0;
	// int conCount = 0;

	// int i;
	// for (i = 0; i < strlen(str); i++)
	// {
	// 	if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' ||str[i] == 'O' || str[i] == 'u' ||str[i] == 'U'){
	// 		vowelCountT++;
	// 	}
	// }
	
	// st.vowelCount = vowelCountT;
	
	return st;
}

/**
 * Updates word count in the struct
 * @param st 
 * @param str 
 * @return an updated WordStats struct 
 */
WordStats updateWordCount(WordStats st, const char str[])
{
	int wordCount = 0;
	int stringLength = strlen(str)-1;
	int i;

	for (i = 0; i < stringLength; i++)
	{
		if(str[i] == ' '){
			wordCount++;
		}
	}
	wordCount++;
	st.wordCount = wordCount;
	
	return st;
}

/**
 * Outputs vowel and consonant stats
 * @param st WordStats structure
 */
void printVowelConsFreq(WordStats st)
{
	printf("consonant Frequency: %d" ,st.consonantCount);
}

/**
 * Outputs word count
 * @param st WordStats structure
 */
void printWordCount(WordStats st)
{
	printf("Word Count: %d\n", st.wordCount);
}

/**
 * Outputs histogram vertically
 * @param st WordStats structure
 */
void printHistogram(WordStats st)
{
	int highest = 0; //highest value
	int i; //This loop runs through the histogram values and frinds the letter with the highest frequencey
	for (i =0; i < ALPHABET_SIZE; i++)
	{
		if(st.histo[i] > highest){
			highest = st.histo[i];
		}
	}

	int j; //This loop runds as many times as the highest frequency (as many lines as needed)
	for (i = highest; i > 0; i--)
	{
		for(j =0; j < ALPHABET_SIZE; j++){ //This loop runds over all the frequences and determines if there needs to be a "*" or a " "
			if (st.histo[j] <= i){
				printf("*");
			}else{
				printf(" ");
			}
			printf(" ");
		}
		printf("\n");
	}


	//This section puts the finishing touches on the graphical interface of the histogram
	printf("a b c d e f g h i j k l m n o p q r s t u v w x y z");
	for(i = 0; i < ALPHABET_SIZE; i++){
		printf("%d ",st.histo[i]);
	}

}

/**
 * Update the histogram
 * @param histo	the histogram
 * @param str	the string used to update the histogram
 */
void updateHistogram(int histo[], const char str[])
{
	int i;
	int currentLetter;
	for(i = 0; i < strlen(str); i++){
		currentLetter = str[i];
		if(str[i] > 64 && str[i] < 91 ){ //The aski values
		currentLetter = currentLetter-65;
		histo[currentLetter]++;
		}
		if(str[i] > 96 && str[i] < 123 ){ //The aski values
		currentLetter = currentLetter-97;
		histo[currentLetter]++;
		}
		
	}
}
