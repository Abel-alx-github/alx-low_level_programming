#ifndef MAIN_H_
#define MAIN_H_
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check__elf(unsigned char *e_ident);
void print__magic(unsigned char *e_ident);
void print__class(unsigned char *e_ident);
void print__data(unsigned char *e_ident);
void print__version(unsigned char *e_ident);
void print__abi(unsigned char *e_ident);
void print__osabi(unsigned char *e_ident);
void print__type(unsigned int e_type, unsigned char *e_ident);
void print__entry(unsigned long int e_entry, unsigned char *e_ident);
void close__elf(int elf);

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
