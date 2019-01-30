#include <stdio.h>
#include <stdlib.h>

int				ft_isspace(char c)
{ // trick to avoid even using an if condition
	return ((c == ' ' || c == '\n' || c == '\t'
			|| c == '\r' || c == '\v' || c == '\f') ? 1 : 0);
}
// way it works:
// removes spaces
// for word count, only increment with first encounter of a char
// then cycle through till end of the word
// then repeat
static int		r_size(char *s)
{
	unsigned int len;

	len = 0;
	while (*s)
	{ // ignore if special characters
		if (ft_isspace(*s))
			++s;
		else
		{
			++len; // word count incremented, will be exact
			while (*s && !ft_isspace(*s)) // as long as not null and not special char
				++s;  // increment till condition is false
		}
	}
	return (len);
}
char			**ft_split(char *s)
{
	int		i = 0;
	int		j = 0;
	int		k;
	char	**r;
	int		w_len = 0;

    // r_sizes() called to get the number of words
	if (!(r = (char **)malloc(sizeof(char*) * (r_size(s) + 1))))
		return (0);
    while (s[i] && j < r_size(s)) // r_size is used to set #rows
	{
		while (s[i] && ft_isspace(s[i])) // skip empty spaces before each word
			i++;
		while (s[i] && !ft_isspace(s[i])) // to find the length of word
		{
			w_len++;
			i++; // i index is used for length of word
		}
		if (!(r[j] = (char *)malloc(sizeof(char) * (w_len + 1)))) // using if to initialize
			return (0);
		k = 0;
		while (w_len)
            // note, i can be bigger than w_len because of possible spaces in beginning
            // w_len in while condition prevents overshooting pass the start of the word
			r[j][k++] = s[i - w_len--]; // trick used to index string
		r[j++][k] = '\0';
	}
    r[j] = NULL; // the coder forgot to include NULL
	return (r);
}

int main()
{
    int i = 0;
    int n;
    char s[] = "  Test is coming this friday.";
    char **p;
    
    n = r_size(s);
    printf("\n111:  %d", n);
    p = ft_split(s);
    while (*p) {
        printf("\n%s", *p++);
    }
    return 0;
}
