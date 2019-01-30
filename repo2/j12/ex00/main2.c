
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

#include<stdio.h>
#include<unistd.h>

int main(int argc, char **argv)
{
    int fd;
    
    if (argc <= 1) {
        write(2, "File name missing.\n", 19);
        return (1);
    }
    if (argc >= 3) {
        write(2, ("Too many arguments.\n", 20);
        return (1);
    }
    
    fd = open("Makefile", O_RDONLY);
    if (fd == -1) {
        write(2, "open() failed.\n", 14);
    }
    
    
    
    if (close(fd) == -1) {
        write(2, "close() failed.\n", 15);
        return (1);
    }
    
    return (0);
}
