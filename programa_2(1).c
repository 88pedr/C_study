#include <stdio.h>
void main(){
    int quantidade, branco, nulo , formula_branco,formula_nulo;
    printf("Eae negao quantas pessoas tem nessa cidade: ");
    scanf(" %.2f",  &quantidade);
    printf("Eae quantos votos brancos desta quantidade %.2f: ",quantidade);
    scanf(" %.2f", &branco);
    printf("Eae quantos votos nulos desta quantidade %.2f: ",quantidade-branco);
    scanf(" %.2f", &nulo);
    printf("%.2f%% de votos brancos\n", ((float)branco*100)/quantidade);
    printf("%.2f%% de votos nulos\n", ((float)nulo*100)/quantidade);
    printf("%.2f votos validos", quantidade-branco-nulo);
}