#ifndef SHELL_H
#define SHELL_H

/*builtin libraries*/
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>
 
/*---system calls---*/
# include <sys/types.h>
# include <sys/stat.h>
# include <sys/wait.h>

/*---our prototypes---*/

int main(int arc, char **argv);
int Fopen(void);
void *YE_read_line(void);
char **par_strtok(char *dir_str, char *parsed);
int *fork_exe_wait(char **cmd);
char *handle_path(char *directive, char *Abs_path);
void *YE_exits(char **cmd);
void *YE_env(char **cmd);
void *YE_cd(char **cmd);
void *YE_pwd(char **cmd);
int *builtin_process(char *cmd);
int setenv(const char *var, const char *worth, int overwrite);
int unsetenv(const char *var);
void *read_directive(void);
int collect_SB(char *commands);

#endif
