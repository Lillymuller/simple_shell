#include "shell.h"

/**
 * par_strtok - gives the tokenized string
 * @dir_str: string that the user inputs
 * Return: the tokenized string
 */

char *par_strtok(char *dir_str)
{
int str_size = 1024;
int indx_cnt = 0;
char *delimiters;
char *parsed;
<<<<<<< HEAD
char *tok_size = malloc(str_size * sizeof(char *));
=======
char **tok_size = malloc(sizeof(char *) * str_size);
>>>>>>> ad378773b7726e94a0b50bdaea458eeca8277688

if (tok_size == NULL)
{
	perror("tokinization error\n");
	exit(0);
}
delimiters = "\t\r\n\a";

parsed = strtok(dir_str, delimiters);
for (; parsed != NULL; parsed++)
if (indx_cnt >= str_size)
{
str_size = (str_size + 1024);
tok_size = realloc(sizeof(char *) * str_size, tok_size);
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
tok_size[indx_cnt] = NULL;
return (tok_size);
free(tok_size);
free(parsed);
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
