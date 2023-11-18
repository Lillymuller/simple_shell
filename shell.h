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
char *YE_read_line(void);
<<<<<<< HEAD
char **par_strtok(char *dir_str, char **tok_size);
int fork_exe_wait(char **cmd, char **eco, char **arg);
=======
char **par_strtok(char *dir_str);
int fork_exe_wait(char **cmd, char *eco, char **args);
<<<<<<< HEAD
>>>>>>> a92d2142684d5558d1cdc3bda5a0845624058eba
int handle_path(char *directive, char *Abs_path);
=======
char * handle_path(char *directive, char *Abs_path);
>>>>>>> f20d057461cd281f40ef23bfec7490ec495e75e6
void *YE_cd(char **cmd);
void *YE_pwd(char **cmd);
void *YE_exits(char **EXIT_ARGS);
int YE_env(char *env[]);
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
void *call_back(char **x);

#endif
