#ifndef FILE_H
#define FILE_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
typedef struct {
    unsigned char e_ident[EI_NIDENT];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint64_t e_entry;
    uint64_t e_phoff;
    uint64_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
} _struct;
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_file(int file_from, int file_to, char *argv[]);
void print_elf_header(const _struct *header);
void checks_elf(unsigned char *e_ident);
void print_magic_elf(unsigned char *e_ident);
void print_class_elf(unsigned char *e_ident);
void print_data_elf(unsigned char *e_ident);
void print_version_elf(unsigned char *e_ident);
void print_abi_elf(unsigned char *e_ident);
void print_osabi_elf(unsigned char *e_ident);
void print_type_elf(unsigned int e_type, unsigned char *e_ident);
void print_entry_elf(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);
#endif
