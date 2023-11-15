The README.md file includes the detailed descriptions of each project.

start - begins the opening of a file in read mode, if the file exists.
otherwise it will create a new file with read mode.
it allocates memory with buff_size because we are using fgets() function.
it closes the opened file and prints the number of charcters,
used in the file.
then returns zero.



RD_LINE - reads from the stream meaning stdin.
memo_size: stores the allocated size in bytes.
the two if and else if condition checks if the end of
file has been reached.


Ab_path - hold the path of the directives and files the user entered
duplicate - we are duplicating the path to tekonize it
dir_size - it holds the length of the command the user enterd
tokenize - holds the tokenized path
tok_size - is the length of the tokonized path.
file_locate - is the memory that holds the directive length,
tokonized length and the two delimeter that we are going to add
we used srtcat() function to add the "/" and "\0".
stat() fuction gives the information of file
in the buffer pointed to. it return 0 on success
and -1 on failure.
the code get the path of the command the user entered
and we copied the path so that we can mipulate the path
without affecting the Abs_path.


The code - forks the parent process and creats the child.
execve() function is used for it takes two arguments
the name of the command to be executed and an array of
strings containing the command and its arguments.
execvp() function is used to replace the child process running
with a new process or program.
wait() function is used for the parent to wait for one of the
child process to end.
status parameter, returns the exit process of the exit status
of the child process.



This - code takes a string of input of stream
and also the deliminaters.
str_size is the memory size allocated for
the command.
indx_cnt is indecatore of the charaters
enterd.
we used strpbrk insted of strtok
Both functions are used to extract parts
of a string based on specific criteria.
in the second parse we are adding 1
to dir_str inorder strpbk start
seacrching from the secound
charater.



This - code reads a line of arguments
from the stream without using
getline function to read line
and allocate memory automatically.
we assigned a buffer-size,
and allocated extra memory.
indx is our indicater and
a is our character counter.
if a is not equal to EOF
or '\0' it will print our
charater.
if charaters to be indicated are
more than the buffer_size given
then we will reloccate it to a
new memory.



this - code shows the exit shell builtin
command and "getenv()" system call that
the enviroment information.



This - is a code that gets change directory process
and that shows the absolute pathname.
we used the chdir() system call to get' cd'.
and the getcwd() system call for 'pwd'.



possessed_val - is the existing value of the environment variable
if the existing value is NULL, then error is returned. if it is not NULL,
set the environment variable var with its value worth and exit with success
and overwrite its value otherwise assign new variable gained_var.
print the size of the existing and new variable with their value.
if the gained_var is NULL, print error and free the gained_var.


possessed_val - assigns the value of the environment variable (var).
when the index is zero and less than 1, it is  incremented.
when the variable doesn't exist it prints error and exits.
but when the the possessed_val exists it unsets the environment variable.
then it exits with success.



This - is our main.RD_LINE - read input from stream
PARSE_ARGS - splits the input when delimi,iS found and replaces it with \0
Status - executes data comparing the builtin
shell commands and assigned processes
and free the static strings(RD_LINE & PARSE_ARGS)



This code is a long one that shows
a multiple functions or process.
command[3] is an open array that holds three
elements or arguments.
SBfun[] is also an open arry that only holds three
elements, it is holding address og the commands that
we want to call back.
collect_SB is a prototype thatcalls our shell builtin
and process.
the lat prototype builtin_process, this compaines
our shell builtins and process. meaning that
if the argument doesnt match the shell buitin commands
given then it will run our process.

