#include <stdio.h>
#include <ctype.h>  
#include <string.h>

int main() {

    char str[255], capital_str[255], str_o_vowels[255], str_o_consonants[255];
    int vowels = 0, consonants = 0, others = 0, str_len;
    int i, j;
    
    // Enter strings
    printf("Enter a sentence: ");
    gets(str);

    // Get length
    str_len = strlen(str);

    // Uppercase
    for (i = 0; i < str_len; i++)
    {
        capital_str[i] = toupper(str[i]);
    }

    // Count
    for (i = 0; i < str_len; i++)
    {
        if (capital_str[i] >= 'A' && capital_str[i] <= 'Z')
        {
            switch (capital_str[i])
            {
            case 'A':
            case 'O':
            case 'E':
            case 'U':
            case 'I':
                
                str_o_vowels[vowels] = str[i];  
                vowels++;

                break;
            
            default:

                str_o_consonants[consonants] = str[i];
                consonants++;

                break;
            }
            
        } else
        {
            others++;
        } 
    }

    // Print result
    printf("Number of vowel are: %d; %s\n", vowels, str_o_vowels);
    printf("Number of consonants are: %d; %s\n", consonants, str_o_consonants);
    printf("Number of others are: %d\n", others);

}