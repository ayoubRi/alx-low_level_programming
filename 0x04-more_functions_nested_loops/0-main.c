#include <stdio.h>

int _isupper(int c); /* Function prototype declaration */

int main(void)
{
    char c = 'A';

    printf("%c: %d\n", c, _isupper(c));
    return 0;
}

