/*
** EPITECH PROJECT, 2023
** open_file
** File description:
** open_file
*/

#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

#include "battle.h"

char *open_file(char const *file_name)
{
    int size;
    struct stat statfile;
    int fd;
    char *buffer;

    if (stat(file_name, &statfile) < 0){
        return NULL;
    }
    fd = open(file_name, O_RDONLY);
    if (fd == -1){
        return NULL;
    }
    size = statfile.st_size;
    buffer = malloc((sizeof(char)) * (size + 1));
    if (read(fd, buffer, size) < 1){
        return NULL;
    }
    buffer[size] = '\0';
    return buffer;
}
