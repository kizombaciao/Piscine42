#include<stdio.h>
#include<fcntl.h>

int ft_putnbr(char c);

int main()
{
    int fd;
    
    fd = open("alph", O_RDONLY);
    ft_putnbr(fd);
    return (0);
}
