#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int dia;

	printf("What number of week it's? ");
	scanf("%d",&dia);

	switch(dia) {
		case 1 :
			printf("Lun, Lunes\n");
			break;
		case 2 :
			printf("Mar, Martes");
			break;
		case 3 :
			printf("Mier, Miercoles");
			break;
		case 4 :
			printf("Jue, Jueves ");
			break;
		case 5 :
			printf("Vie, Viernes ");
			break;
		case 6 :
			printf("Sab, Sabado ");
			break;
		case 7 :
			printf("Dom, Domingo ");
			break;
		default :
			printf("No existe");
}
return 0;
}
