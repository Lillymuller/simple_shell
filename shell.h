#ifndef SHELL_H
#define SHELL_H

/*builtin libraries*/
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# include <errno.h>

/*---system calls---*/
# include <sys/types.h>
# include <sys/stat.h>
# include <sys/wait.h>

/*---our prototypes---*/

int main(int arc, char **argv);
int Fopen(void);
void *YE_read_line(void);
char **par_strtok(char *dir_str);
int fork_exe_wait(char **cmd, char **eco);
int handle_path(char *directive, char **Abs_path);
int YE_cd(const char *cmd);
char *YE_pwd(char *cmd, size_t AB);
int YE_exits(char *EXIT_ARGS, int status);
int YE_env(char **cmd);
int builtin_process(char *cmd);
int setenv(const char *var, const char *worth, int overwrite);
int unsetenv(const char *var);
void *read_directive(void);
void *YE_strcat(char *field, char *tank);
int YE_strcmp(char *x, char *y);
void *YE_strcpy(char *field, char *tank);
void *YE_strlen(char *n);
void *YE_strncmp(char *x, char *y);
char *env_path(char **environ);
int call_back(char *commands);

#endif
