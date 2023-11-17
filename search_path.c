#include "shell.h"

/**
  * env_path - this searchs the enviroment
  * @environ: gets input
  * Return: the enviroment path
  */

char *env_path(char **environ)
{
int j = 0, i = 0;
int length;
char *Abs_path = malloc(sizeof(length));

while (environ[i] && strncmp(environ[i], "PATH=", 5) != 0)
{
i++;
}

if (!environ[i])
{
return (NULL);
}
length = strlen(environ[i]) - 5;
if (!Abs_path)
{
free(Abs_path);
return (NULL);
}
for (j = 5; j < length + 5; j++)
{
Abs_path[j - 5] = environ[i][j];
}
Abs_path[length] = '\0';
return (Abs_path);
free(Abs_path);
}