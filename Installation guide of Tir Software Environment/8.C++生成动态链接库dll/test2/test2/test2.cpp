#include "stdafx.h"
int addB(int b);
int main(int a, int b)
{
	int result;
	int a1, b1;
	if (a >= 10)
	{
		a1 = a;
	}
	else
	{
		a1 = a + 10;
	}
	if (b >= 10)
	{
		b1 = b;
	}
	else
	{
		b1 = addB(b);
	}
	result = a1 + b1;
	return result;
}

int addB(int b)
{
	int temp = b + 10;
	return temp;
}
