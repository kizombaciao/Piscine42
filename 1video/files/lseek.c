// YouTube
// https://www.youtube.com/watch?v=_-OFPZVVYzg&t=62s

#include<sys/stat.h>
#include<fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    int fd;
    int ret;
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int b;
    
    fd = open("outfile", O_CREAT|O_APPEND|O_RDWR,0600);
    
    if (fd < 0) {
        perror("open");
        exit(1);
    }
    
    /* write something */
    ret = write(fd, (void *)a, sizeof(a));
    if (fd < 0) {
        perror("write");
        close(fd);
        exit(1);
    }
    
    /* seek using lseek */
    ret = lseek(fd, -4*sizeof(int), SEEK_END);
    if (fd < 0) {
        perror("lseek");
        close(fd);
        exit(1);
    }
    
    
    /* read from that position set by lseek */
    ret = read(fd, &b, sizeof(int));
    if (fd < 0) {
        perror("read");
        close(fd);
        exit(1);
    }
    printf("b = %d", b);
    
    close(fd);
    return (0);
}
