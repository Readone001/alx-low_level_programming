#include <stdio.h>

/**
* main -prints prime factors of 1231952
*
* Return: Always 0 (success)
*/

int main(void)

{
long int n, pf;

n = 612852475143;
for (pf = 2; pf <= n; pf++)

{
if (n % pf == 0)

{
n /= pf;
pf--;
}
}

printf("%ld\n", pf);
return (0);
}
