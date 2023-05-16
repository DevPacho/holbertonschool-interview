#include "palindrome.h"

/**
 * is_palindrome - function that checks whether or not
 * a given unsigned integer is a palindrome.
 * @n: number to check.
 * Return: 1 if n is a palindrome, and 0 otherwise.
 *
 * Remember: https://www.programiz.com/c-programming/examples/palindrome-number
 */

int is_palindrome(unsigned long n)
{
	int reversed = 0, remainder, original;

	original = n;

	while (n != 0)
	{
		remainder = n % 10;
		reversed = reversed * 10 + remainder;
		n /= 10;
	}

	if (original == reversed)
		return (1);
	else
		return (0);

	return (0);
}
