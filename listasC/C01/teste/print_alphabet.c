#include <unistd.h>

void ft_print_alphabet(void){

    char letra = 'a';

    while (letra <= 'z')
    {
        write(1, &letra, 1);
        letra ++;
    }
}
int main (){
    ft_print_alphabet();
}
