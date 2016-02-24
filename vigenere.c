/*   
 *  pset2- vigenere.c
 *
 *  Josh Mena
 *  CS50x Miami
 *
 *  apply Vigenère’s cipher to a character
 *
 */

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./vigenere <keyword>\n");
        
        return 1;
    }
    // Get the keyword to use for cipher
    string keywd = argv[1];
    
    int keyln = strlen(keywd);
   
     // Check that it is a valid keyword
    for (int i = 0; i < keyln; i++)
        {
            if (!isalpha(keywd[i]))
                {
                printf("Keyword must only contain letters A-Z and a-z\n");
                return 1;
                }
            
            keywd[i] = toupper(keywd[i]);
        }
       
    //declaring and initializing variables 
    string message = GetString();
    int msglength = strlen(message);
    int klength = strlen(keywd);
    int k = 0;
    
    // takes plain text and encrypts it
    for (int i = 0; i < msglength; i++)
    {    
        if (k == klength){
            k = 0;
        }    
        
        if (isalpha(message[i])){
          
            if (isupper(message[i])){
                    message[i] = ((message[i] - 65) + (keywd[k] - 65)) % 26 + 65;
                }
            if (islower(message[i])){
                    message[i] = ((message[i] - 97) + (keywd[k] - 65)) % 26 + 97;
                }
            
            printf("%c", message[i]);
            k++;
        }
        else 
        {
            printf("%c", message[i]);
        }
    }
    
    printf("\n");
    
    return 0;

}
