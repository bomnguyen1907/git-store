#include <stdio.h>

int main(void)
{
	//run through an array and print its value out
	int number[] = { 111,222,333,444,555,666,777,888,999 };

	for (int i = 0; i < 9; i++) //give i=0, and if i not yet reach 9(total numbers inside array which is 9) it will ++
	{
		printf("position:%i value:%i\n", i+1,number[i]);
		
		/*everytime i++, print out the value that array in the posistion of i hold, 
		example number[6] position i=6 hold value of 66, which get printed out, along with other value inside array "number"*/
	}

	//run through an array in search for a specific value
	int phonebook[] = { 101,202,303,404,505,606,707,808,909 };

	for (int u = 0; u < 9; u++)
	{
		if (phonebook[u] == 404)
		{
			printf("Number found! posistion:%i value:%i\n", u + 1, phonebook[u]);
			/*while (u = 10)
			{
				printf("the number asked doesn't appear on the book [UnU]");
				return 0;
			}*/
		}
		else
		{
		printf("the number asked doesn't appear on the book [UnU] posistion:%i\n",u+1);
		}
	}
}
