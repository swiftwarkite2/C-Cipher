#include <stdio.h>
#include <stdlib.h>
#include "encrypt.h"
#include <string.h>
// this program converts a message input by the user by enocoding it using a caeser cipher generator that uses a shift value also inputted by the user
// to compile on the command line type "gcc -g main.c encrypt.c -o hw2"
// to execute for example "./hw2 University of Portland"
int main(int argc, char* argv[]) { // require the message to encode saved as argv[] and the number of words in that message +1 saved as argc
	int shift; // defines shift

	if (argc == 1) { // checks for correct amount of parameters
		printf("Incorrect number of parameters\n");
		return EXIT_FAILURE;
	}
	// promps for shift amount
	printf("This is a Caesar Cipher Generator, enter shift amount (1-25):\n"); // a Caesar Cipher replaces each letter with a letter further in the alphabet by a length equal to the shift number.
	scanf("%d", &shift); // takes the inputted number and assigns it to the int shift
	// prepairs encrypted message statement
	printf("Encrypted message:   ");
	for (int i = 1; i < argc; i++) {
		encryptString(argv[i], shift); // encrypts each string of each argument
		printf("%s ", code); // prints the new encoded string for each argument
		memset(code, 0, 20); // resets the code to 0 after printing, words can only be a max of 20 charecters long
	}
	printf("\n"); // ends encrypted message statement
	return EXIT_SUCCESS;
}
