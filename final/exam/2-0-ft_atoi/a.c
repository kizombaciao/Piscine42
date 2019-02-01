
int ft_atoi(char *s)
{
    
    while (*s == 32 || *s >= 9 && *s <=13) {
        s++;
    }
    if (*s == '-') {
        sign = -1;
        s++;
    }
    if (*s == '+') {
        s++;
    }
    res = 0;
    while (*s >= '0' && *s <= '9') {
        res = res * 10 + (*s - '0');
        s++;
    }
    
    
}
