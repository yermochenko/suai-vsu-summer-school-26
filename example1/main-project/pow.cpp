#include "pow.h"

#include <cmath>

double mypow(double a, unsigned int n)
{
	double result = 1;
	while (n)
	{
		if (n & 1)
		{
			result *= a;
		}
		a *= a;
		n >>= 1;
	}
	return result;
}
