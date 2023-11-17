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

/*---macros---*/
#define delime "\t\r\n\a"
/*---our prototypes---*/

int main(int arc, char **argv);
int Fopen(void);
void *YE_read_line(void);
char **par_strtok(char *dir_str);
int fork_exe_wait(char **cmd, char **eco);
<<<<<<< HEAD
char *handle_path(char *directive, char *Abs_path);
int YE_exits(char **cmd);
int YE_env(char **cmd);
int YE_cd(const char *cmd);
char *YE_pwd(char *cmd, size_t AB);
=======
int handle_path(char *directive, char **Abs_path);
int YE_exits(char **, char *EXIT_ARGS, int Abort);
int YE_env(char **env);
int YE_cd(char **cmd);
int YE_pwd(char **cmd);
>>>>>>> dd3dd803b8f2f11d1ad6d8c0d9b25a6300aca0cf
int builtin_process(char *cmd);
int setenv(const char *var, const char *worth, int overwrite);
int unsetenv(const char *var);
void *read_directive(void);
void *YE_strcat(char *field, char *tank);
int YE_strcmp(char *x, char *y);
void *YE_strcpy(char *field, char *tank);
void *YE_strlen(char *n);
void *YE_strncmp(char *x, char *y);
char *env_path(char **env);
int call_back(char *commands, int (*SBfun[]) (char **));

#endif
