#include "shell.h"

/**
 * par_strtok - gives the tokenized string
 * @dir_str: string that the user inputs
 * @tok_size: states the token size
 * Return: the tokenized string
 */

char **par_strtok(char *dir_str, char **tok_size)
{
int str_size = 1024;
int indx_cnt = 0;
char *delimiters = NULL;
char *parsed = NULL;
char *val = malloc(sizeof(char *) * str_size);

delimiters = "\t\r\n\a";

parsed = (char *)strtok(dir_str, delimiters);
for (; parsed != NULL; parsed++)
if (indx_cnt >= str_size)
{
str_size = (str_size + 1024);
tok_size = realloc((void *)val, (size_t)tok_size);
if (tok_size == NULL)
{
	perror("tokinization error \n");
	exit(0);
}
for (indx_cnt = 0; (tok_size[indx_cnt] = parsed) != 0; indx_cnt++)
{
if (tok_size == NULL)
{
perror("Error\n");
exit(EXIT_FAILURE);
free(tok_size);
}
parsed = strtok(NULL, delimiters);
}
tok_size[indx_cnt] = 0;
free(tok_size);
free(parsed);
free(val);
}
return (0);
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
