#include <stdio.h>
#include <unistd.h>

int		ft_strlen(char *s) {
	int i;
	i = 0;
	while (s[i])
		i++;
	return (i);
}
int		ft_isblank(char c) {
	if (c == ' ' || c == '\t')
		return (1);
	if (c >= 9 && c <= 13) // special chars
		return (1);
	return (0);
}
void	epurstr(char *s) {
    
    int len = ft_strlen(s); // note, s is used in declaration; find string length first
    
    printf("\nlen:  %d", len);
    
    while (len && ft_isblank(s[len - 1])) // to get rid of spaces at the end
    {
        --len;
        printf("\nlen2:  %d    %c", len, s[len - 1]);
    }
    // len is indexed now to the last char of the last word
    
    printf("\nlen*s++ and len:  %c       %d", *s, len); // start at the beginning
    
    while (len && ft_isblank(*s) && *s++) // to get rid of spaces at the beginning
    {
        printf("\nlen3:  %d   %c", len, *s);
        --len;
    }
    
    // core code
    printf("\nlen core:  %d", len); // len now reflects the string with spaces at both ends
    
    while (len--)
	{
        printf("\nLastLoop:  %c   %c", *s, *(s+1));
        // trick used to skip if s and s+1 are spaces
		if (!ft_isblank(*s) || (*(s + 1) && !ft_isblank(*(s + 1))))
        {
            printf("   LastLoop2:  %c   %c", *s, *(s+1));
            write(1, s, 1);
        }
        s++;
	}
}
int		main(int ac, char **av) {
	if (ac == 2 && *av[1])
		epurstr(av[1]);
	write(1, "\n", 1);
	return (0);
}
