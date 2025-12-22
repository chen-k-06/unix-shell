#include <stdio.h>
#include "parser.h"
#include "execute.h"
#define BUF_SIZE 128

void print_prompt(void)
{
    printf("\n$ ");
}

char *read_input(char *buf, size_t size)
{
    fgets(buf, size, stdin);
    printf("Input: %s", buf);
    return buf;
}

void shell_loop(void)
{
    while (1)
    {
        print_prompt();

        char in[BUF_SIZE];
        char out[BUF_SIZE];
        read_input(in, BUF_SIZE);
        parse_command(out, in, BUF_SIZE);
        // execute_command();
    }
}