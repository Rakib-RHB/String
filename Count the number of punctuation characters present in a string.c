/*  Write a program in C to count the number of punctuation characters present in a string.*/






#include<stdio.h>
#include<ctype.h>

int main()
{
	int ctr1=0;
	int ctr2=0;
	char str[100];
	printf("\n Count the number of punctuation characters exists in a string :\n");
    printf("------------------------------------------------------------------\n");
    printf(" Input a string : ");
	fgets(str, sizeof str, stdin);
	while (str[ctr1])
	{
		if (ispunct(str[ctr1])) ctr2++;
		ctr1++;
	}
	printf (" The punctuation characters exists in the string is : %d\n\n", ctr2);
  	return 0;
}




