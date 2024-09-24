unsigned int ft_strlcpy(char *dest, char *src, unsigned int size) {
    unsigned int i;
    unsigned int src_length;

    i = 0;
    src_length = 0;
    while (src[src_length]) {
        src_length++;
    }
    while (src[i] && i < size - 1 && size != 0) {
        dest[i] = src[i];
        i++;
    }
    if (i < size) {
        dest[i] = 0;
        i++;
    }
    return (src_length);
}