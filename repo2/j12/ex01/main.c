/*
#include<string.h>
*/
#include<stdio.h>

#include<errno.h>
#include<unistd.h>
#include<fcntl.h>

# define BUF_SIZE 50

int main(int argc, char **argv)
{
    int fd;
    int read_n;
    char buf[BUF_SIZE +1];
    
    if (argc < 2 || argc > 2) {
        /*
        write(2, &errno, 20);
        */
        perror("Perror:");
        
        return (1);
    }
    fd = open(argv[1],  O_RDONLY);
    if (fd == -1) {
        /*
        write(2, &errno, 100);
        */
        perror("Perror:");
        return (1);
        
    }
    read_n = 1;
    while (read_n) {
        read_n = read(fd, buf, BUF_SIZE);
        buf[read_n] = '\0';
        write(1, buf, read_n);
    }
    if (close(fd) == -1) {
        perror("Perror:");
        return (1);
    }
    
    return (0);
}

