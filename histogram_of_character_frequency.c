 /*************************************************************************
 *                   Mureithi David Wachira                               *
 *                   P15/2204/2011                                        *
 *                                                                        *
 *                   University of Nairobi                                *
 *                   School of Computing & Informatics                    *
 *                                                                        *
 *                   Course: PROGRAMMING AND PROBLEM SOLVING  (CSC 121)   *
 *                   Date:   Thursday 11th April 2013                     *
 *                                                                        *
 *                    A program to print a histogram of the  			  *
 *					 frequencies of different characters (printable)	  *
 *					 in its input (draw horizontal bars)				  *
 *                                                                        *
 *************************************************************************/

 #include<stdio.h> /* C Standard Input and Output Library*/

/*Variable declarations*/
char string_of_characters[200];
int character_frequency_counter;
int counter;
int print_histogram_counter;
int output_counter;
char frequency_array[26][2]={'a',0,'b',0,'c',0,'d',0,'e',0,'f',0,'g',0,'h',0,'i',0,'j',0,'k',0,'l',0,'m',0,'n',0,'o',0,'p',0,'q',0,'r',0,'s',0,'t',0,'u',0,'v',0,'w',0,'x',0,'y',0,'z',0};



/*Functions declaration - prototyping*/
char frequency_of_characters (char string_of_characters[50]);
int printout_of_character_frequencies(char frequency_array[25][2]);

int main(void)/* The main method*/
{   /* Brief detail on the screen about the program*/
    printf(" /*************************************************************************\n *                   Mureithi David Wachira                               *\n *                   P15/2204/2011                                        *\n *                                                                        *\n *                   University of Nairobi                                *\n *                   School of Computing & Informatics                    *\n *                                                                        *\n *                   Course: PROGRAMMING AND PROBLEM SOLVING  (CSC 121)   *\n *                   Date:   Thursday 11th April 2013                     *\n *                                                                        *\n *                   A program to print a histogram of the  	          *\n *		     frequencies of different characters (printable)	  *\n *		     in its input (draw horizontal bars)		  *\n *                                                                        *\n *************************************************************************/\n");

    printf("Please enter a string of characters \n");   /* Prompt to instruct use to enter a string of characters*/
    gets(string_of_characters);                         /* Capture of the string by the system using function gets()*/

    frequency_of_characters (string_of_characters);     /* Call of function frequency_of_characters()*/
    printout_of_character_frequencies(frequency_array); /* Call of function printout_of_character_frequencies()*/


    return 0;                                           /* An indication that the program runs successfully*/
}                                                       /* The end of the main method*/



char frequency_of_characters (char string_of_characters[50])/* Function to calculate the frequencies of the characters and storage of the results in an array*/
{
    for(counter=0; counter<=strlen(string_of_characters); counter++) /* Loop to go through the array of characters (string) */
    {
          for (character_frequency_counter=0;character_frequency_counter<=25;character_frequency_counter++) /* Loop to go through the frequency array*/
            {
               if (frequency_array[character_frequency_counter][0]==string_of_characters[counter]) /* Comparability of a character to characters in the string*/
                {
                 frequency_array[character_frequency_counter][1]=(frequency_array[character_frequency_counter][1])+1;/* If character if found its count is incremented by one(1)*/
                }
            }

    }

    return frequency_array;   /* The function returns an array to the main method (caller)*/

}


int printout_of_character_frequencies(char frequency_array[25][2]) /* Function to print out the results*/
{
    printf("\n\n%-10s%-8s%15s\n","Letter","Frequency","Histogram");
	for(output_counter=0;output_counter<=25;output_counter++)  /* Loop to print the elements of the frequency array*/
	{
	 printf("%3c%12d             ", frequency_array[output_counter][0], frequency_array[output_counter][1]);

        for (print_histogram_counter= 1; print_histogram_counter<= frequency_array[output_counter][1]; print_histogram_counter++ ) /* Loop to print the horizontal bars of the histogram*/
        { printf( "%c",'*'); }

     printf("\n");          /* Next line*/
	}
	return 0;               /* Ends after the function executes successfully*/
}

