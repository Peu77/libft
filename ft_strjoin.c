#include "libft.h"
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2) {
    char *joined;
    int i;
    int j;

    if (!s1 || !s2)
        return (NULL);
    joined = (char *) malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!joined)
        return (NULL);
    i = 0;
    j = 0;
    while (s1[i]) {
        joined[i] = s1[i];
        i++;
    }
    while (s2[j]) {
        joined[i + j] = s2[j];
        j++;
    }
    joined[i + j] = '\0';
    return (joined);
}