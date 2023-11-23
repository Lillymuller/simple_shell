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
int i = 0;
char *delimiters;
char *parsed;
char **val = malloc(sizeof(char *) * str_size);

if (val == NULL)
{
	perror("Allocation Error\n");
	exit(EXIT_FAILURE);
}
delimiters = "\t\r\n\a";
parsed = (char *)strtok(dir_str, delimiters);
while (parsed != NULL)
{
for (i = 0; i < indx_cnt; i++)
{
val[i] = parsed;
}
if (indx_cnt >= str_size)
{
str_size = (str_size + 1024);
tok_size = realloc((void *)val, sizeof(char *) * str_size);
if (tok_size == NULL)
{
	perror("tokinization error \n");
	exit(EXIT_FAILURE); }
val = tok_size;
}
val[indx_cnt] = strdup(parsed);
if (val[indx_cnt] == NULL)
{
perror("Memory allocation error\n");
exit(EXIT_FAILURE); }
if (tok_size == NULL)
{
exit(EXIT_FAILURE); }
parsed = strtok(NULL, delimiters);
}
val[indx_cnt] = NULL;
free(parsed);
return (val);
free(tok_size);
free(val);
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
