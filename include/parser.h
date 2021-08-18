#ifndef SHELL_PARSER_H
#define SHELL_PARSER_H

#include "common.h"


/* STRUCTURES

typedef struct arg {
    char name[COMMAND_ARGUMENT_MAX_LEN];
    unsigned int size;
    unsigned int idx_number;
} argument_t;

typedef struct cmd {
    char* name;
    unsigned int length;
    argument_t** arguments;
    unsigned int args_num;
    int table_index;
} command_t;

*/


// parses a given command and returns command_t* or NULL 
command_t* command_parse_new(char*);

// handle a given command
int command_handle(command_t*);

// parses a given command and validates it
int command_parse_is_valid(const char*);

// checks if the command basename exists in available commands list
int command_parse_basename_exists(const char*);

// checks if the command syntax is valid
int command_parse_syntax_is_valid(const char*);

// parses a given command and returns the number of its arguments
unsigned int command_parse_arguments_number(const char*);

// gets the basename of a given command, i.e. the name of the command
char* command_parse_get_basename(const char*);


#endif // ! SHELL_PARSER_H