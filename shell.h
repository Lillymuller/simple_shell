#ifndef SHELL_H
#define SHELL_H

/*builtin libraries*/
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

/*---system calls---*/
# include <sys/types.h>
# include <sys/stat.h>
# include <sys/wait.h>

/*---our prototypes---*/

int main(int argc, char *argv[]);
char *get_path(char *new_file);
int check_slash(const char *str);
char *get_location(char *org_path, char *new_file);

#endif
