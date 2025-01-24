#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void test_ft_split_error_handling(void)
{
    char **result;
    char *input = "foo bar baz";
    char delimiter = ' ';

    // Simulate memory allocation failure by setting malloc to return NULL
    malloc = NULL;

    result = ft_split(input, delimiter);

    if (result == NULL)
    {
        printf("Test passed: ft_split returned NULL on memory allocation failure.\n");
    }
    else
    {
        printf("Test failed: ft_split did not return NULL on memory allocation failure.\n");
    }

    // Reset malloc to its original state
    malloc = malloc;
}

int main(void)
{
    test_ft_split_error_handling();
    return 0;
}
