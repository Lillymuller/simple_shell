#include "shell.h"

/**
 * par_strtok - gives the tokenized string
 * @dir_str: string that the user inputs
 * @delim: the delimeter used for parsing
 * Return: the tokenized string
 */

char **par_strtok(char *dir_str, const char *delim)
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
if (tok_size == NULL)
{
perror("Error\n");
exit(EXIT_FAILURE);
}
tok_size[indx_cnt] = NULL;
return ((char **)tok_size);
}

/**
*This - code takes a string of input of stream
*and also the deliminaters.
*str_size is the memory size allocated for
*the command.
*indx_cnt is indecatore of the charaters
*enterd.
*we used strpbrk insted of strtok
*Both functions are used to extract parts
*of a string based on specific criteria.
*in the second parse we are adding 1
*to dir_str inorder strpbk start
*seacrching from the secound
*charater.
*/
