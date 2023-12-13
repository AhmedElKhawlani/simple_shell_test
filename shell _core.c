#include "simple_shell.h"

int main()
{
    char *command = NULL;
    char **splitted_command = NULL;
    int status = 0;
    int test = 0;

    while (!NULL)
    {
        command = new_command();
        if (command == NULL && isatty(0) == 1)
        {
            write(1, "\n", 1);
            return (status);
        }
        if (command == NULL)
            return (status);
        splitted_command = split_command(command);
        if (!splitted_command)
            continue;
        while(splitted_command[test])
        {
            printf("%s\n",splitted_command[test]);
            free(splitted_command[test]);
            splitted_command[test] = NULL;
            test++;
        }
        free(splitted_command);
        splitted_command = NULL;
    }
}
