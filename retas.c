#include <stdio.h>
#include <stdlib.h>
	int main (){
		float x1, x2, x3, x4, y1, y2, y3, y4, angular1, angular2, angular3, linear1, linear2, linear3, linear4;
		printf ("Informe as coordenadas dos pontos (X e Y)\n");
		printf ("Informe o primeiro ponto de x\n");
		scanf ("%f", &x1);
		printf ("Informe o segundo ponto de x\n");
		scanf ("%f", &x2);
		printf ("Informe o terceiro ponto de x\n");
		scanf ("%f", &x3);
		printf ("Informe o quarto ponto de x\n");
		scanf ("%f", &x4);
		printf ("Informe o primeiro ponto de y\n");
		scanf ("%f", &y1);
		printf ("Informe o segundo ponto de y\n");
		scanf ("%f", &y2);
		printf ("Informe o terceiro ponto de y\n");
		scanf ("%f", &y3);
		printf ("Informe o quarto ponto de y\n");
		scanf ("%f", &y4);
		
		angular1 = (y2-y1)/(x2-x1);
		angular2 = (y3-y2)/(x3-x2);
		angular3 = (y4-y3)/(x4-x3);
		
		linear1 = y1-angular1*x1;
		linear2 = y2-angular1*x2;
		linear3 = y3-angular1*x3;
		linear4 = y4-angular1*x4;
		
		if (angular1==angular2 && angular2==angular3 && angular3==angular1)
		{
			if (linear1==linear2 && linear2==linear3 && linear3==linear4)
			{
				printf ("O coeficiente angular e %.2f\n", angular1);
				printf ("O coeficiente linear e %.2f\n", linear1);
			}
		}
		else
			printf ("Os pontos nao pertencem a mesma reta!");
		
		return 0;
	}
