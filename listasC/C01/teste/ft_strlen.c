/*Função que conte e retorne o nº de chars 
em uma string.*/

int ft_strlen(char *str){
    int i =0;

    while(str[i] != '\0'){
        str++;
        i++;
    }
    return(i);
}
#include <stdio.h>
int main() {
    char input_string[] = "bom dia";
    int num_characters = ft_strlen(input_string);

    printf("Número de caracteres na string: %d\n", num_characters);

    return 0;
}