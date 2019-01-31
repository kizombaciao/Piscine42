#include <stdio.h>

int isblank(char c)
{
    return(c == ' ' || c == '\t');
}
int isupperalpha(char c)
{
    return(c >= 'A' && c <= 'Z');
}

char lowercase(char c)
{
    return(c - 'A' + 'a');
}

char uppercase()
{
    return(c - 'a' + 'A');
}

void rstr(char *s)
{
    int i = 0, len;
    int flag = 1;

    // may be lower case everything first
    while (s[i]) {
        if (isupperalpha(s[i])) {
            s[i] = lowercase(s[i]);
        }
        i++;
    }
    len = i;
    
    while (--len) {
        if (!isblank(s[len]) && flag) {
            flag = 0;
            
        }
        
    }
    
    

    
    
    while (s[i] && !isblank(s[i])) {
        
        i++;
    }
    
}



int main(int ac, char **av)
{
    int i = 1;
    
    if (ac >= 1) {
        while (i < ac) {
            rstr(av[i]);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}



/*
 
 
 // remove any beginning blanks
 i = 0;
 while (isblank(s[i])) {
 i++;
 } // upon exit, current i is not blank
 
