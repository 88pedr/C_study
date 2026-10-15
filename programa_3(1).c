#include <stdio.h>
#include <math.h>
//faça um algoritmo que leia as dimensoes  de uma sala retangular e a dimensao de um azulejo e calcule quantos azulejos serao necessarios para cobrir todo o chao da sala
void main(){
    float comprimento_sala, largura_sala, comprimento_azulejo, largura_azulejo, area_total;
    printf("Eae conte me qual é o comprimento e largura da sala?");
    scanf("%f%f", &comprimento_sala,&largura_sala);
     printf("Eae conte me qual é a comprimento e largura do azulejo?");
    scanf("%f%f", &comprimento_azulejo,&largura_azulejo);
    area_total = (int)ceil((largura_sala*comprimento_sala)/(largura_azulejo*comprimento_azulejo));
    printf("%d de azulejos para completar", area_total);
}

