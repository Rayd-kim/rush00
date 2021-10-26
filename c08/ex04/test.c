#include <stdlib.h>
#include <stdio.h>

typedef struct test
{
	int	size;
	char	*str;
	char	*copy;
}		t1;

int	main()
{
	t1	te;
	char *str = "12345679876543";
	char dest[]="12345678999876";
	char s;

	printf("%lu\n", sizeof(t1));
	printf("%lu\n", sizeof(dest));
	printf("%lu\n", sizeof(str));
	printf("%lu\n", sizeof(s));
}
