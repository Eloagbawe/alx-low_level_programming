#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *  *  *  *  * main - Entry point
 *   *   *   *   *
 *    *    *    *    * Return: Always 0 (Success)
*/
int main(void)
{
char upper;
char lower;

for (lower = 'a'; lower <= 'z'; lower++)
{
	putchar(lower);
}
for (upper = 'A'; upper <= 'Z'; upper++)
{
	putchar(upper);
}
putchar('\n');
return (0);
}
