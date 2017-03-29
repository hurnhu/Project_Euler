#include <iostream>
#include <math.h>

bool isPrime(int n) {
	bool prime = true;
	if (n==1)
	{
		return false;
	}
	if (n == 2)
	{
		return true;
	}
	for (int b = 2; b <= sqrt(n); b++)
	{
		if (n%b == 0)
		{
			return false;
		}
	}
	return true;
}

int main() {
	int i = 0;
	int a = 0;
	int lastPrime = 0;
	while (i < 10001)
	{
		a++;
		if (isPrime(a))
		{
			lastPrime = a;
			i++;
		}
	}
	std::cout << lastPrime << std::endl;
	return 0;
}
