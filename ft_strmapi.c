#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) {
    char *mapped;
    unsigned int i;

    if (!s || !f)
        return (NULL);
    mapped = ft_strdup(s);
    if (!mapped)
        return (NULL);
    i = 0;
    while (s[i]) {
        mapped[i] = f(i, s[i]);
        i++;
    }
    mapped[i] = '\0';
    return (mapped);
}