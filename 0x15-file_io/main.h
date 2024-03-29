#ifndef MAIN_H
#define MAIN_H

#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
size_t read_textfile(const char *filename, size_t letters);

#endif
