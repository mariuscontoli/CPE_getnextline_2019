/*
** EPITECH PROJECT, 2019
** get_next_line.h
** File description:
** header for get next line project
*/

#ifndef GET_NEXT_LINE_H_
#define GET_NEXT_LINE_H_

#define READ_SIZE (2)

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

char *re_alloc(char *str);
char *get_next_line(int fd);
int my_strlen(char const *str);
int my_putstr(char const *str);
void my_putchar(char c);

#endif /* !GET_NEXT_LINE_H_ */
