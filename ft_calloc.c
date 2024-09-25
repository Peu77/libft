#include "libft.h"
#include <stdlib.h>
#include <stdint.h>

void *ft_calloc(size_t count, size_t size) {
    if (count == 0 || size == 0) {
        count = 1;
        size = 1;
    }

    if (count > SIZE_MAX / size) {
        return NULL; // Prevent overflow
    }

    void *ptr = malloc(count * size);
    if (!ptr) {
        return NULL;
    }

    ft_bzero(ptr, count * size);
    return ptr;
}