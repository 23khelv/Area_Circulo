#include <stdio.h>
/* Exercicio URI JUDGE 1002
A f�rmula para calcular a �rea de uma circunfer�ncia �: area = p . raio2. Considerando para este problema que p = 3.14159:

- Efetue o c�lculo da �rea, elevando o valor de raio ao quadrado e multiplicando por p.

ENTRADA
A entrada cont�m um valor de ponto flutuante (dupla precis�o), no caso, a vari�vel raio. 
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
