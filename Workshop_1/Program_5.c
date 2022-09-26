#include <stdio.h>
#include <ctype.h>  // Thư viện để dùng chuỗi in hoa
#include <string.h> // Thư viện để khai báo chuỗi

int main() {

    char str[255], capital_str[255], str_o_vowels[255], str_o_consonants[255];
    int vowels = 0, consonants = 0, others = 0, str_len, strovowels_len, stroconsonants_len ;
    int i, j;
    
    // Nhập vào chuỗi
    printf("Enter a sentence: ");
    gets(str);

    // Lấy chiều dài của chuỗi để bỏ vào vòng lặp for
    str_len = strlen(str);

    // Dùng vòng lặp for để biến chuỗi thành chuỗi in hoa
    for (i = 0; i < str_len; i++)
    {
        capital_str[i] = toupper(str[i]);
    }

    // Bộ đếm
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

    // In ra kết quả
    printf("Number of vowel are: %d; %s\n", vowels, str_o_vowels);
    printf("Number of consonants are: %d; %s\n", consonants, str_o_consonants);
    printf("Number of others are: %d\n", others);

}