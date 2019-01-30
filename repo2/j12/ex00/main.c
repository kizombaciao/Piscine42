/*
#include<sys/types.h>
#include<sys/stat.h>
*/
#include<fcntl.h>
#include<stdio.h>
#include<unistd.h>

# define BUF_SIZE 5

int main(int argc, char **argv)
{
    int fd;
    int read_n;
    char buf[BUF_SIZE + 1];
    
    if (argc <= 1) {
        write(2, "File name missing.\n", 19);
        return (1);
    }
    if (argc >= 3) {
        write(2, "Too many arguments.\n", 20);
        return (1);
    }
    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        write(2, "open() failed.\n", 15);
        return (1);
    }
    read_n = 1;
    while (read_n) {
        read_n = read(fd, buf, BUF_SIZE);
        buf[read_n] = '\0';
        write(1, buf, read_n);
    }
    if (close(fd) == -1) {
        write(2, "close() failed.\n", 15);
        return (1);
    }
    return (0);
}
