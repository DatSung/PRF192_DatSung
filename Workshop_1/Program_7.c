#include <stdio.h>
 int main() {

	char char_1, char_2;
	int distance;

	printf("Input first character: ");
	scanf("%c", &char_1);
    fflush(stdin);
	printf("Input second character: ");
	scanf("%c", &char_2);

	if (char_1 > char_2)
    {
        char_1 ^= char_2 ^= char_1 ^= char_2;
	    distance = char_2 - char_1;

	    printf("%d\n", distance);
    } 

	for (distance = char_1; distance <= char_2; distance++)
    {
         printf("%5c, %5d, %5o, %5X\n", distance, distance, distance, distance);
    }
} 