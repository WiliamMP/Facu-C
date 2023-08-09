#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario, inss, salario_liquido;

    const float fgts = 8; // geralmente é retirado 8% do salario bruto do funcionario

    // funções 
    float calc_aliq(float aliq, float base){ // visual studio querendo q eu coloque ; aqui =s
        float valor_aliq;

        valor_aliq = (aliq / 100) * base;

        return valor_aliq;
    }

    // inicio do código em si
    printf("Entre com seu salário: \n");
    scanf("%f", &salario);

    // deve dar para usar switch condicional para fazer esse encadeamento de if
    if (salario <= 1212.00){
        inss = 7.5;
    } else if ((salario >= 1212.01) || (salario <= 2427.85)) {
        inss = 9;
    } else if((salario >= 2427.86) || (salario <= 3641.03)) {
        inss = 12;
    } else if ((salario >= 3641.04) || (salario <= 7087.22)) {
        inss = 14;
    } else if(salario > 7087.23) {
        inss = 14;
    }

    float somaAliqs = calc_aliq(inss, salario) + calc_aliq(fgts, salario); // soma as aliq de todos

    salario_liquido = salario - somaAliqs;
    printf("%2.f", salario_liquido);

}