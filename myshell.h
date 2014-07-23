#ifndef MYSHELL_H
#define MYSHELL_H

#define normal        0 /*一般的命令*/
#define out_redirect  1 /*输出重定向*/
#define in_redirect   2 /*输入重定向*/
#define have_pipe     3 /*命令中有管道*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <dirent.h>

void print_prompt();
void get_input(char *);
void explain_input(char *, int *, char arglis[100][256]);
void do_cmd(int, char arglist[100][256]);
int find_command(char *);

#endif

