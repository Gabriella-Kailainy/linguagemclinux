#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
	float numero1;
	float numero2;
	int operacao;
	float total;
	
opcao==1;
while(opcao==1){
	printf("Digite uma operacao  1=adicao, 2=multiplicacao, 3=subtracao 4=divisao,");
        scanf("%d",&operacao);
	printf("Digite o primeiro numero");
	scanf("%f",&numero2);
	printf("Digite o segundo numero");
	scanf("%f",&numero2);

switch(operacao){
	case 1:
		total=numero1+numero2;
		break;
	case 2:
		total=numero1*numero2;
		break;
	case 3:
		total=numero1-numero2;
		break;
	case 4:
		total=numero1/numero2;
		break;
}
	printf("Total da sua operacao e: %.2f",total);
	printf("Se quiser encerrar digite 0, se quiser continuar digite 1");
	scanf("%d",opcao);
	
}
return 0;

