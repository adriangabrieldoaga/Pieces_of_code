#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

int main()
{
    int i;

    for (i = 0; i < 135; i++)
    {
        fprintf(stderr, "%d: %s\n", i, strerror(i));
    }

    return 0;
}
