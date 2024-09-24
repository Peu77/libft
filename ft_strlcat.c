unsigned int ft_strlcat(char *dest, char *src, unsigned int size) {
    unsigned int dest_len;
    unsigned int src_len;
    unsigned int i;

    dest_len = 0;
    src_len = 0;
    i = 0;
    while (dest[dest_len])
        dest_len++;
    while (src[src_len])
        src_len++;
    if (size > 0) {
        while (src[i] && dest_len + i < size - 1) {
            dest[dest_len + i] = src[i];
            i++;
        }
    }
    dest[dest_len + i] = 0;
    if (dest_len > size)
        return (src_len + size);
    return (dest_len + src_len);
}