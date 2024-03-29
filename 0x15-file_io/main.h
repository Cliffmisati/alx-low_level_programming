#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_version(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void check_elf(unsigned char *e_ident);
void print_class(unsigned char *e_ident);

#endif
