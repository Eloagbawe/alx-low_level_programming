#include <stdio.h>
#include "variadic_functions.h"

int main(void)
{
	print_all("ceis", 'B', 3, NULL);
	print_all("");
	print_all(NULL);
	print_all("ceis", 'B', 3, "stSchool");
	return (0);
}
