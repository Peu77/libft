#include "libft.h"

int ft_memcmp(void *dest, const void *src, size_t n) {
    unsigned char *p1 = (unsigned char *) dest;
    unsigned char *p2 = (unsigned char *) src;
    while (n--) {
        if (*p1 != *p2) {
            return *p1 - *p2;
        }
        p1++;
        p2++;
    }
    return 0;
}