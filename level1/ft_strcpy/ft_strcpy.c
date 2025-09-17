#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(char *str) {
    size_t len = 0;
    while (str[len]) len++;

    return len;
}

char    *ft_strcpy(char *s1, char *s2) {
    size_t len1 = ft_strlen(s1);
    size_t len2 = ft_strlen(s2);

    char *result = malloc(len1 + len2 + 1);
    if (!result) return NULL;

    char *tmp = result;
    while (*s1) {
        *tmp = *s1;
        tmp++;
        s1++;
    }

    while (*s2) {
        *tmp = *s2;
        tmp++;
        s2++;
    }

    *tmp = '\0';
    return result;
}

int main() {
    char *s1 = "Hello, ";
    char *s2 = "42Tokyo";

    printf("%s\n", ft_strcpy(s1, s2));

    return 0;
}