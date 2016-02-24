/*   
 *  pset2- caesar.c
 *
 *  Josh Mena
 *  CS50x Miami
 *
 *  encrypts messages using Caesar’s cipher
 *
 */

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    string ptext;
    int key;
    
    //variable to hold shifted values
    int e;
    
    if (argc != 2)
    {
        printf("Usage: ./caesar <key>\n");
        return 1;
    }
    else
    {
    //get the key size only to use 26 combination    
    key = atoi(argv[1]) % 26;
        
        if (key == 0)
        {
            printf("provide valid key\n");
            return 1;
        }
        
        
    }
   
    //validate input to accept only alpha characters
    do
    {
        ptext = GetString();
    }
    while (isalpha(ptext[0]) == 0);
    
    // takes plain text and encrypts it 
    for (int i = 0, j = strlen(ptext); i < j; i++)
    {    
        e = 0;
        
        if (isupper(ptext[i]))
        {
            e = (((int)ptext[i] - 65 + key) % 26) + 65;
            printf("%c", (char) e);
        }
        else if (islower(ptext[i]))
        {
            e = (((int)ptext[i] - 97 + key) % 26) + 97;
            printf("%c", (char) e);
        }
        else 
        {
            printf("%c", ptext[i]);
        }
    
    }
    printf("\n");
    
    return 0;
}
