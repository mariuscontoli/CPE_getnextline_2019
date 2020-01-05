/*
** EPITECH PROJECT, 2019
** get_next_line.c
** File description:
** main file 
*/

#include "include/get_next_line.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        ++i;
    }
}

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        ++i;
    }
    return i;
}

char	*my_strcat(char *dest, char *src)
{
	int len;
	int i;

	len = my_strlen(dest);
	i = 0;
	while (src[i])
		dest[len + i] = src[i++];
	dest[len + i] = '\0';
	return (dest);
}

char *get_next_line(const int fd)
{
    static char buffer[READ_SIZE];
    char *src;
    int max = 0;
    int i = 0;
    int y = 0;
    int max_buff = 0;

    if ((src = malloc(sizeof(char))) == NULL) {
        return (NULL);
    }
    src[0] = '\0';
    while ((max = read(fd, buffer, READ_SIZE)) > 0 && buffer[max_buff] != '\n') {
        while (buffer[max_buff] != '\0') {
            src[i] = buffer[max_buff];
            i += 1;
            max_buff += 1;
        }
        max_buff = 0;
    } 
    if (max == 0 && i == 0)
        return (NULL);
    else
        return (src);
}