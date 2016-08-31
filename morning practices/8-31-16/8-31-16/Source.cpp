/* create a function to calculate a prime number (show on paper or in comments what you think a prime number is. do not google it...)
write a function that uses that function to find all prime numbers under 100.
write a function that determines if a number is a multiple of another number.
use your functions together to find all prime numbers below 1000.*/
#include <iostream>
int primenum = 1;
int AON; // any other number
bool Prime = false;
bool findallprimenums = false;

void prime() //a prime number is a number that is only divisable by itself or 1;
{
	if (primenum / 1 == 1 || primenum / primenum == 1)
	{
		Prime = true;
	}

	if (primenum / AON == AON)
	{
		Prime = false;
	}

	if (AON != 1)
	{
		Prime = false;
	}
}


void prime100()
{
	for (int i = 0; i < 100; i++)
	{
		primenum = i;
		while (primenum == i)
		{
			Prime = true;
			if (primenum = i % (i));
			{
				findallprimenums = true;
				std::cout << primenum << std::endl;
			}
		}
	}
}

int main()
{
	std::cout << primenum << std::endl;
	system("pause");
	return 0;
}
