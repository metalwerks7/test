/*   
 *  pset2- initials.c
 *
 *  Josh Mena
 *  CS50x Miami
 *
 *  prompts user for full name 
 *  outputs their initials in uppercase 
 *
 */
 
#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string name = GetString();
    
    //takes first letter of element and converts to upper case
    name[0] = toupper(name[0]);
    printf("%c", (name[0]));
    
    //gets the length of all string, display first character after each space

    for (int i = 0; i < strlen(name); i++)
        {
           if (name[i] == ' ')
                {
                    name[i+1] = toupper(name[i+1]);
                    printf("%c", (name[i+1]));
                }  
        }
   printf("\n");
}