int ft_strncmp(char *s1, char *s2, unsigned int n) {
    unsigned int i;
    char c1;
    char c2;

    i = 0;
    while (i < n) {
        c1 = s1[i];
        c2 = s2[i];
        if (!c1 && !c2)
            return (0);
        if (c1 != c2)
            return (c1 - c2);
        i++;
    }
    return (0);
}