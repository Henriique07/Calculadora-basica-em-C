#include <stdio.h>
#include <stdlib.h>
#define texto1 "{~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~}\n"
#define texto "{          CALCULADORA           }\n"
#define texto2 "{~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~}\n"
int main(){
	int decisao=0,options=0;
	float n1,n2,result;

	printf (texto1);
	printf (texto);
	printf (texto2);
	
	do{
	
		if (decisao == 0 || decisao == 1){
		
	printf ("Escolha qual execucao deseja realizar: \n");
	
	printf ("1- SOMA \n");
	printf ("2- SUBTRACAO \n");
	printf ("3- MULTIPLICACAO \n");
	printf ("4- DIVISAO \n");
	
	printf ("   Aguardando... :");
	scanf ("%d", &options);
	
	for (options < 1; options > 4;){
	
		printf ("Acao invalida! Tente novamente... \n");
		printf ("Escolha o qual execucao deseja realizar: \n");
	
	printf ("1- SOMA \n");
	printf ("2- SUBTRACAO \n");
	printf ("3- MULTIPLICACAO \n");
	printf ("4- DIVISAO \n");
	printf ("  Aguardando... :");
		scanf ("%d", &options);
	}
	
	printf ("Digite um numero: \n");
		scanf ("%f", &n1);
	printf ("Digite um segundo numero: \n");
		scanf ("%f", &n2);
	//Realiza as operações e imprime os resultados
	switch (options){
		
		case 1:
			result = n1+n2;
			printf ("%.f + %.f = %.f \n", n1,n2,result);
			break;
			
		case 2:
			result = n1-n2;
			printf ("%.f - %.f = %.f \n", n1,n2,result);
			break;
			
		case 3:
			result = n1*n2;
			printf ("%.f x %.f = %.1f \n", n1,n2,result);
			break;
			
		case 4:
			result = n1/n2;
			printf ("%.f / %.f = %.1f \n", n1,n2,result);
			break;
}
	//Realiza as operções de continuar ou encerrar o codigo	
	printf ("Quer realizar outra operacao? \n");
			printf ("1- SIM \n");
			printf ("2- NAO \n");
			scanf ("%d", &decisao);

		}	if (decisao == 1){
		system ("cls");
		continue;		
} 	else
		printf ("Operacao encerrada, OBRIGADO!");
		break;
		
	}while (decisao != 2);	
		
		return 0;				
}