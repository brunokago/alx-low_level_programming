
#include <stdio.h>
#include <string.h>

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}


int main(void)
{
    char buffer[98] = {0x00};

    _memset(buffer, 0x01, 95);
    void *memset(void *s, int c, size_t n);

    return (0);
}