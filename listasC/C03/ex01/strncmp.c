#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, unsigned int n) {
    while (n > 0) {
        if (*s1 != *s2) {
            return (*s1 - *s2);
        } else if (*s1 == '\0') {
            return 0;
        }
        
        s1++;
        s2++;
        n--;
    }
    
    return 0;
}

int main() {
    char str1[] = "tchau";
    char str2[] = "tchau";
    
    int n = 5;
    int result = ft_strncmp(str1, str2, n); // Comparar os primeiros n caracteres
    
    if (result == 0) {
        printf("As primeiras %d letras são iguais.\n", n);
    } else if (result < 0) {
        printf("str1 vem antes de str2.\n");
    } else {
        printf("str2 vem antes de str1.\n");
    }
    
    return 0;
}
