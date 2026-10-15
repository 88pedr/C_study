#include <stdio.h>
void main(){
    const float PI = 3.14159;
    float raio, peri, area;
    printf("Informe o raio do circulo:");
    scanf("%f",&raio);
    peri = 2* PI * raio;
    area = PI * raio * raio;
    printf("Perimentro = %.2f\nÁrea = %.2f", peri, area);
}