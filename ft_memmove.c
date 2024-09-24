#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len) {
    if (dst < src)
        return ft_memcpy(dst, src, len);

    char *lastd = dst + len - 1;
    const char *lasts = src + len - 1;
    while (len--) {
        *lastd-- = *lasts--;
    }

    return dst;
}