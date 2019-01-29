/*
#include<stdio.h>
#include<string.h>
*/
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

#include "ft.h"

void ft_putstr_fd(int fd, char *str)
{
    write(fd, str, ft_strlen(str));
}

int main()
{
    int fd;
    
    fd = open("42", O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
    if (fd == -1) {
        ft_putstr("open() failed\n");
    }
    ft_putnbr(fd);
    if (close(fd) == -1) {
        ft_putstr("close() failed\n");
        return (1);
    }
    return (0);
}

