#include <stdio.h>
#include "configuration.h"
#include "tests.h"

int main(int ac, char** av)
{
    if (ac < 2)
    {
        printf("%s version: %d.%d\n", av[0], 
                Unit_test_VERSION_MAJOR,
                Unit_test_VERSION_MINOR);

        printf("Usage: %s number\n", av[0]);
        
        return 1;
    }

    test_init_queue();

    return 0;
}