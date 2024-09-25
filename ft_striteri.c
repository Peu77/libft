void ft_striteri(char *s, void (*f)(unsigned int, char *)) {
    unsigned int i = 0;

    if (!s)
        return;
    while (s[i]) {
        f(i, (s + i));
        i++;
    }
}