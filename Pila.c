#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	const int TAMANIO_PILA = 10;
	
	int pila[TAMANIO_PILA];
	int seleccionUsuario;
	int indiceInicial = 0;
	int indiceFinal = 0;
	int datoIngresado;
	int i;
	
	while(seleccionUsuario != 5){
		
		printf("Seleccione una opcion:\n");
		printf("1. Ingresar dato.\n");
		printf("2. Eliminar ultimo dato ingresado.\n");
		printf("3. Eliminar todos los datos.\n");
		printf("4. Ver los datos guardados.\n");
		printf("5. Salir.\n");
		scanf("%i", &seleccionUsuario);
		
		system("cls");
		
		switch(seleccionUsuario){
		
		case 1:
			if(indiceFinal == TAMANIO_PILA){
				printf("La pila esta llena.\n");
			}else{
				printf("Ingrese un numero: ");
				scanf("%i", &datoIngresado);
				pila[indiceFinal] = datoIngresado;
				indiceFinal++;
			}
			break;
			
		case 2:
			if(indiceInicial == indiceFinal){
				printf("La pila esta vacia.\n");
			}else{
				printf("Dato eliminado.\n");
				/*for(i = indiceFinal; i > indiceInicial; i--){
					//pila[i] = pila[i+1];
				}*/
				pila[indiceFinal] = -1;
				indiceFinal--;
			}
			break;
		
		case 3:
			indiceInicial = 0;
			indiceFinal = 0;
			break;
			
		case 4:
			if(indiceInicial == indiceFinal){
				printf("La pila esta vacia.\n");
			}else{
				printf("Los datos guardados son: \n");
				for(i = indiceInicial; i < indiceFinal; i++){
					printf("%i\n", pila[i]);
				}
			}
			break;
			
		case 5:
			printf("Saliendo...");
			break;
			
		default:
			printf("Opcion invalida.\n");
			break;

		}
	}
	
	return 0;
}
