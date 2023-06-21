#include <unistd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int result;

    result = _islower('o');
    write(1, "Case _islower('o'):", 20);
    if (result)
        write(1, " Passed\n", 8);
    else
        write(1, " Failed\n", 8);

    result = _islower(108);
    write(1, "Case _islower(108):", 19);
    if (result)
        write(1, " Passed\n", 8);
    else
        write(1, " Failed\n", 8);

    // Repeat for the rest of the test cases...

    return (0);
}
