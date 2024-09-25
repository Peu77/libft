#include <stdlib.h>
#include "libft.h"

static int is_separator(char c, char charset) {
    return (c == charset);
}

static int count_words(const char *str, char charset) {
    int count;

    count = 0;
    while (*str) {
        while (*str && is_separator(*str, charset))
            str++;
        if (*str && !is_separator(*str, charset)) {
            count++;
            while (*str && !is_separator(*str, charset))
                str++;
        }
    }
    return (count);
}

static char *allocate_word(const char *str, char charset) {
    char *word;
    int len;
    int i;

    len = 0;
    while (str[len] && !is_separator(str[len], charset))
        len++;
    word = (char *) malloc(sizeof(char) * (len + 1));
    if (!word)
        return (0);
    i = 0;
    while (i < len) {
        word[i] = str[i];
        i++;
    }
    word[len] = '\0';
    return (word);
}

char **ft_split(const char *str, char seperator) {
    char **result;
    int words;
    int i;

    words = count_words(str, seperator);
    i = 0;
    result = (char **) malloc((words + 1) * sizeof(char *));
    if (!result)
        return (0);
    while (*str) {
        while (*str && is_separator(*str, seperator))
            str++;
        if (*str && !is_separator(*str, seperator)) {
            result[i] = allocate_word(str, seperator);
            if (!result[i])
                return (0);
            i++;
            while (*str && !is_separator(*str, seperator))
                str++;
        }
    }
    result[i] = 0;
    return (result);
}