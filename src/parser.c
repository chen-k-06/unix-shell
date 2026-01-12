#include <stdio.h>
#define MAX_ARGS 64
#include <stdbool.h>

int parse_command(char **argv, char *inbuf, size_t size)
{
    int argc = 0;
    char *p = inbuf;
    bool inQuotes = false;

    while (*p != '\0')
    {
        // skip leading whitespace
        while (isspace((unsigned char)*p))
        {
            *p = '\0';
            p++;
        }

        // break if inbuf is over or num arguments is exceeded
        if (*p == '\0')
        {
            break;
        }
        if (argc >= MAX_ARGS - 1)
        {
            break;
        }

        // quotes handler
        // if (!inQuotes && *p == """)
        // {

        // }

        // walk through current argument
        argv
            [argc++] = p;
        while (*p != '\0' && !isspace((unsigned char)*p))
        {
            p++;
        }
    }
    argv[argc] = NULL;
    return argc;
}