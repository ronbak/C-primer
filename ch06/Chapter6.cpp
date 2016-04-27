#include "Chapter6.h"

long long fact(int val)
{
	long long sum = 1;
	for(;val > 0; --val)
	{
		sum *= val;
	}
	return sum;
}

int abs_own(int val)
{
	if(val < 0)
	{
		return -val;
	}
	return val;
}


