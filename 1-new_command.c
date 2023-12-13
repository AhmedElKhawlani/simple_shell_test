#include "simple_shell.h"

/**
 * new_command - Displays a prompt and waits for 
 *               the user to type a command, then
 *               reads the command.
 * Return: Pointer to the command if success, NULL if error or EOF.
*/

char *new_command(void)
{
    char *line = NULL;
    size_t length = 0;
    ssize_t status;

    if (isatty(0) == 1)
        write(1, "$ ", 2);
    status = getline(&line, &length, stdin);
    if (status == -1)
    {
        free(line);
        line = NULL;
        return (NULL);
    }
    return (line);
}
