#include "main.h"

int find_sqrt(int num, int root);
nt _sqrt_recursion(int n);
/**
 * find_sqrt - entry
 * @num: number
 * @root: root
 * Return: Number
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}
/**
 * _sqrt_recursion - Entry
 * @n: number
 * Return: -1 is nt natural number
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}
