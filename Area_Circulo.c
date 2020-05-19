#include <stdio.h>
/* Exercicio URI JUDGE 1002
A fórmula para calcular a área de uma circunferência é: area = p . raio2. Considerando para este problema que p = 3.14159:

- Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por p.

ENTRADA
A entrada contém um valor de ponto flutuante (dupla precisão), no caso, a variável raio. 
*/

int main(){
	double raio, area;
	scanf("%lf",& raio);
	//Caluculo de area de um circulo
	area = 3.14159*(raio*raio);
	//Saida - resultado da area
	printf("A=%.4lf\n", area);
	
	return 0;
}
