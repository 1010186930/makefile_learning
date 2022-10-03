#include "modulea.h"
#include "moduleb.h"
#include "modulec.h"

int main()
{
	int a = add(1, 2);
	int b = minus(1, 2);
	int c = multiply(2, 2);
	printf("a:%d, b:%d, c:%d", a, b, c);
}