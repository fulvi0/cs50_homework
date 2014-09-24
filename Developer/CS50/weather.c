#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int opc = 0, celcius = 0, fahrenheit = 0;

	do
	{
		printf("Menu de opciones \n\n");
		printf("1. ingrese los valores \n");
		printf("2. fahrenheit to celcius:\n");
		printf("3. celcius to fahrenheit\n");
		printf("4. Salir:\n");
		printf("Opcion a escoger: ");
		scanf("%d",&opc);
		
		switch(opc){
			case 1:
				system("cls");
				printf("Ingrese el primer valor: ");
				scanf("%d", &celcius);
				printf("Ingrese el segundo valor: ");
				scanf("%d", &fahrenheit);
				break;
			case 2:
				printf("Ingrese el primer valor: ");
				scanf("%d", &celcius);
				printf("C to F: %d", fahrenheit - 32 / 9 * 5);
				break;
			case 3:
				system("cls");
				printf("F to C: %d", celcius / 5 * 9 + 32);
				break;
			case 4:
				break;
			default:
				system("cls");
				printf("La opcion que ingreso es incorreca");
				break;
		}
	} while (opc != 6);

return 0;
}