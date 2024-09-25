#include "libft.h"

char *ft_strtrim(char const *s1, char const *set) {
    size_t start = 0;
    size_t end = ft_strlen(s1);
    while (s1[start] && ft_strchr(set, s1[start])) {
        start++;
    }
    while (end > start && ft_strchr(set, s1[end - 1])) {
        end--;
    }
    return ft_substr(s1, start, end - start);
}