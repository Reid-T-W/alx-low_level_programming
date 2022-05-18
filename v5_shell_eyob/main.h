#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

extern char **environ;

#define BUFSZ 1024

/**
 * struct path_s - a struct of a directory in path
 * @dir: the directory
 * @next: the next node in the list
 *
 * Description: this struct shall constitute
 * a node in the linked list of directories in
 * the PATH environment variable
 */
typedef struct path_s
{
	char *dir;
	struct path_s *next;
} path_t;

/**
 * struct builtin - struct for builtin
 * @cmd: the command
 * @handler: the handler function for the command
 */
typedef struct builtin
{
	char *cmd;
	void (*handler)(char **, char **, int *);
} builtin_t;

void (*get_builtin(char *s))(char **argv, char **cmds, int *last_return);
void exec_builtin(char *s, char **argv, char **cmds, int *last_return);

int _putchar(char c);
int _strcmp(const char *s1, const char *s2);
char *_strdup(const char *str);
void _puts(char *str);
int _strlen(const char *s);
char *_strtok(char *s, char *delm, int *currIndex);
int _atoi(char *s);
int is_number(char *s);

path_t *add_node_end(path_t **head, char *str);
void link_path_dirs(path_t **head);
void free_list(path_t *head);

void *free_array(char **arr, int j);
void free_entire_arr(char **arr);

int _setenv(const char *name, const char *value, int overwrite);
int _unsetenv(const char *name);

int cmd_exists(char *cmd);
char *fetch_cmd(char *cmd);
int isOpr(char *s);
char **mkargv(char *str);
char **mkOprargv(char *str);
char **makeCmds(char *str);

void exec_file(int ac, char **av);
char **get_input(void);
ssize_t _getline(char *buf, size_t sz);
void exec_cmds(char **cmds);
void exec(char **argv, int *last_return);
void parent(int *status, char **argv, int *last_return);
int print_error(void);

void exitHandler(char **argv, char **cmds, int *last_return);
void envHandler(char **argv, char **cmds, int *last_return);
void setenvHandler(char **argv, char **cmds, int *last_return);
void unsetenvHandler(char **argv, char **cmds, int *last_return);

#endif /* MAIN_H */
