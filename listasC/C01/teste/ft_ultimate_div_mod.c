void    ft_ultimate_div_mod(int *a, int*b){

    int div;
    int mod;

    if(b != 0){
        div = *a / *b;
        mod = *a % *b;
        *a = div;
        *b = mod;
    }
}
#include <stdio.h>
int main (){
    
    int a = 9;
    int b = 8;
    ft_ultimate_div_mod(&a, &b);
    printf("Divisão: %d\n", a);
    printf("Módulo(resto): %d\n", b);
}