#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float salario, inss, ir, sal_liquido; // defs das variaveis
	
	printf("Digite seu salario bruto");
	scanf("%f", salario);
	
	if(salario <= 1693.72){
		inss = salario * 0.08; // 8% / 100 <- aliq
	} else if (salario >= 1693.73 && salario <= 2822.90) { 
		inss = salario * 0.09; // 9% / 100 <- aliq
	} else {
		inss = salario * 0.10; // 10% / 100 <- aliq
	}
	sal_liquido = (salario - inss) - ir;
	
	printf("\nDesconto Inss: %f\n", inss);
	
	printf("\nSalario liquido: %2.f\n", sal_liquido);
	
}
