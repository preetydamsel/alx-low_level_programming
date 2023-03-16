#include <unistd.h>
/**
 * main - prints a unix file to standard error
 * Return 1 (Sucess)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" -Dora kopar, 2015-10-19\n", 59);
	return (1);
}
