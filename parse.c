#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * par_strtok - gives the tokenized string
 * @dir_str: string that the user inputs
 * @delim: the delimeter used for parsing
 * Return: the tokenized string
 */

char *par_strtok(char *dir_str, const char *delim)
{
int str_size = 64;
int indx_cnt = 0;
char **tok_size = malloc(str_size * sizeof(char *));
char *parsed;

if (indx_cnt >= str_size)
{
str_size = (str_size + 64);
tok_size = realloc(tok_size, str_size *sizeof(char *));
}
parsed = strpbrk(dir_str, delim);
for (indx_cnt = 0; parsed != NULL; indx_cnt++)
{
tok_size[indx_cnt] = parsed;
parsed = strpbrk(dir_str + 1, delim);
}
if (!tok_size)
{
perror("Error\n");
exit(EXIT_FAILURE);
}
tok_size[indx_cnt] = NULL;
return (*tok_size);
}
