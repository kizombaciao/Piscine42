//

#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include "ft.h"
#include<unistd.h>
#include<stdio.h>

# define BUF_SIZE   1
/* BUF_SIZE controls how much you read per loop */

int main()
{
    int fd;
    int ret = 1;
    char buf[BUF_SIZE + 1];
    
    fd = open("42", O_RDONLY);
    printf("\nfd:  %d\n", fd);
    
    if (fd == -1) {
        ft_putstr("open() error");
        return (1);
    }
    
    while (ret) {
        ret = read(fd, buf, BUF_SIZE);
        buf[ret] = '\0';
        /*
        ft_putnbr(ret);
        ft_putchar('\n');
        */
        ft_putstr(buf);
        lseek(fd, -10, SEEK_END);
    }
    ft_putnbr(ret);
    
    if (close(fd) == -1) {
        ft_putstr("close() error");
        return (1);
    }
    return (0);
}
/*
 ft_putnbr(fd);
 ret = read(fd, buf, BUF_SIZE);
 buf[ret] = '\0';
 printf("\nret:  %d", ret);
 printf("\nbuf:  %s", buf);
 */
/*
 */

