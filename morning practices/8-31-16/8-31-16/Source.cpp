/* create a function to calculate a prime number (show on paper or in comments what you think a prime number is. do not google it...)
write a function that uses that function to find all prime numbers under 100.
write a function that determines if a number is a multiple of another number.
use your functions together to find all prime numbers below 1000.*/
#include <iostream>
int primenum;
int AON; // any other number
bool Prime = false;

void prime100() //a prime number is a number that is only divisable by itself or 1;
{
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			AON = j;
			if (primenum = i % (100));
			{
				if (primenum / 1 == 1 || primenum / primenum == 1)
					Prime = true;

				if (AON != 1)
					Prime = false;

				while (AON != 1 || AON != primenum)
				{
					if (primenum / AON == AON)
					{
						Prime = false;
					}
				}

				if (Prime = true)
					std::cout << primenum << std::endl;

				else
					std::cout << primenum << std::endl;
			}
		}
	}
}

int main()
{
	prime100();
	system("pause");
	return 0;
}