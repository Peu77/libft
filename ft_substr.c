#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len) {
    char *sub;
    size_t i;
    int len_s;

    len_s = ft_strlen(s);

    if (!s)
        return (NULL);
    if (start >= len_s)
        return (ft_strdup(""));
    if (len + start > len_s)
        len = len_s - start;
    sub = (char *) malloc(sizeof(char) * (len + 1));
    if (!sub)
        return (NULL);
    i = 0;
    while (i < len && s[start + i]) {
        sub[i] = s[start + i];
        i++;
    }
    sub[i] = '\0';
    return (sub);
}