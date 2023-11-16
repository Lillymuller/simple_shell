#include "shell.h"

/**
  * env_path - this searchs the enviroment
  * @env: gets input
  * Return: the enviroment path
  */

char *env_path(char **env)
{
int j = 0, i = 0;
int length;
char *ab_path = malloc(sizeof(length));

for (i = 0; env[i] && strncmp(env[i], "PATH=", 5) != 0; i++)
;

if (!env[i])
{
return (NULL);
}
length = strlen(env[i]) - 5;
if (!ab_path)
{
free(ab_path);
return (NULL);
}
for (j = 5; j < length + 5; j++)
{
ab_path[j - 5] = env[i][j];
}
ab_path[length] = '\0';
free(ab_path);
return (ab_path);
}

