/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: dong
 *
 * Created on November 7, 2016, 10:23 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
 * 
 */
int main(int argc, char** argv) {
    char c;
	printf("input a character: ");
	scanf("%c",&c);
	printf("your choice: %c\n",c);
        c=toupper(c);
	switch(c)
	{
		case 'Q': case 'W': case 'E' : case 'R': printf("Romantic yourself not only likes action, especially with business");
												 break;
		case 'T': case 'Y': case 'U' : case 'I': printf("Like to participate in social activities. ");
												 break;
		case 'O': case 'P': case 'A' : case 'S': printf("Sensitive and independent");
												 break;
		case 'D': case 'F': case 'G' : case 'H': printf("Like the romance, the flowers and the desire to be loved.");
												 break;
		case 'J': case 'K': case 'L' : case 'Z': printf("You are placed on top job");
												 break;
		case 'X': case 'C': case 'V' : case 'B': printf("As a shy person, do not open");
												 break;
		case 'M': case 'N': printf("Innocent and shy."); 
                                                                                                 break;
									
		default: printf("invalid a character. I can guess");	
	}   
    return (EXIT_SUCCESS);
}

