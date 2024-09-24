#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s) {
    size_t len = ft_strlen(s);
    char *new = (char *) malloc(len + 1);
    if (new == NULL) {
        return NULL;
    }
    return ft_memcpy(new, s, len + 1);
}