#include "libft.h"

char *ft_strrchr(const char *str, int c) {
    char *last = NULL;
    while (*str) {
        if (*str == (unsigned char) c) {
            last = (char *) str;
        }
        str++;
    }
    if (c == 0) {
        return (char *) str;
    }
    return last;
}