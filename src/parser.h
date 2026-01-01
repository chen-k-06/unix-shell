/**
 * parse_command - Tokenize a command line input into arguments.
 *
 * @argv: An array of char* pointers where token pointers will be stored.
 *        Must have space for at least MAX_ARGS pointers.
 * @inbuf: Input buffer containing the command line string.
 *         This buffer will be modified in-place: whitespace characters
 *         are replaced with null terminators ('\0').
 * @size: Size of the input buffer (for reference; not currently used).
 *
 * Returns: The number of tokens (argc).
 *
 * Description:
 *   This function parses a command line input buffer into whitespace-delimited
 *   tokens. Each token pointer is stored in the argv array. The input buffer
 *   is modified in-place, and tokens point directly into the buffer.
 *
 *   The returned argv array is NULL-terminated and compatible with exec-family
 *   system calls (e.g., execvp).
 *
 * Notes:
 *   - Leading and multiple whitespace characters are skipped.
 *   - MAX_ARGS prevents buffer overflow.
 *   - Does not handle quotes, pipes, or redirection (basic parser).
 */
int parse_command(char **argv, char *inbuf, size_t size);
