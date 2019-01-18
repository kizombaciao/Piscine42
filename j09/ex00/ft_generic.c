#include <unistd.h>

void ft_generic(void)
{
    int i;
    char str[] = "Tut tut ; Tut tut";
    char c = '\n';
    
    i = 0;
    while (str[i]) {
        write(1, (str + i), 1);
        
        i++;
    }
    write(1, &c, 1);
}

int main()
{
    ft_generic();
}
