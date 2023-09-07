/*função que exiba uma string de caracteres
no output padrão*/
#include <unistd.h>

void ft_putstr(char *str){
    while(*str){
        write(1, str, 1);
        str++;
    }
}
int main (){
    char *oi = "Bom dia";
    ft_putstr(oi);
}