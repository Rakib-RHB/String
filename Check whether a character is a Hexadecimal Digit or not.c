/*  Write a program in C to check whether a character is a Hexadecimal Digit or not */




#include<stdio.h>
#include<ctype.h>


int main()
{
	char TestChar;
	printf("\n Check whether a character is Hexadecimal Digit or not :\n");
    printf("-------------------------------------------------------\n");
    printf(" Input a character : "); // Hexadecimal Digits are a-f, A-F or 0-9
    scanf( "%c", &TestChar );
	if( isxdigit(TestChar) )
		printf( " The entered character is a hexadecimal digit. \n" );
	else
		printf( " The entered character is not a hexadecimal digit. \n" );
	return 0;
}

