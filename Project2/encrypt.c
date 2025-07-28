#include <stdio.h>
#include <stdlib.h>
#include "encrypt.h"
#include <ctype.h>

void encryptString(char* s, int n) {
    for (int i = 0; s[i] != '\0'; ++i) {

        ch = s[i]; //isolates a charecter in the string each loop 

        //Lowercase characters.
        if (islower(ch)) {
            ch = (ch - 'a' + n) % 26 + 'a'; // -'a' is -1 from char and makes it a number, +'a' is +1 to char and makes it a letter
        }
        // Uppercase characters.
        if (isupper(ch)) {
            ch = (ch - 'A' + n) % 26 + 'A';
        }
        code[i] = ch; // puts encrypted string into defined array
    }

}

