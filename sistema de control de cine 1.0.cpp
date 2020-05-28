# include <stdio.h>
# include <stdlib.h>

int main ()

{
	int num, bol, sal;
	char peli[50];
	char candy[50];
	char promo[50];
	char des[50];
	char stc[50]; 
	char dev[50];

	do{
		
	system("cls");
	
	printf( "\n\n   Bienvenido(a):\n\n");
    printf( "\n   1-) Boletos");
    printf( "\n   2-) Funciones");
    printf( "\n   3-) Salas");
    printf( "\n   4-) Dulceria");
    printf( "\n   5-) Promociones");
    printf( "\n   6-) Descuentos");
    printf( "\n   7-) Estacionamiento");
    printf( "\n   8-) Devoluciones");
    printf( "\n   9-) Tiket");
	printf( "\n   10-) Ayuda");
    printf( "\n   11-) Salir");
   
    
	printf( "\n\n  Introduzca el numero de la opcion deseada:\n");
    scanf( "%d", &num);
    
    
    switch(num)
			{
				case 1:
					printf( "\n\n  Ingrese la cantidad de boletos solicitados:\n\n");
					scanf("%d", &bol);
					break;
					
				case 2:
					printf( "\n\n  Ingrese el nombre de la pelicula:\n\n");
					fflush(stdin);
					scanf("%s", &peli);
				    break;
				    
				case 3:
					printf( "\n\n  Ingrese el numero de sala:\n\n");
					scanf("%d", &sal);
					break;
					
				case 4:
					printf( "\n\n  Ingrese los productos solicitados:\n\n");
					fflush(stdin);
					scanf("%s", &candy);
					break;
				
				case 5:
					printf( "\n\n  Ingrese SI/NO se acepto la poromocion:\n\n");
					fflush(stdin);
					scanf("%s", &promo);
					break;	
				
				case 6:
					printf( "\n\n  Ingrese el tipo de descuento:\n\n");
					fflush(stdin);
					scanf("%s", &des);
					break;
				
				case 7:
					printf( "\n\n  Ingrese SI/NO tiene lugar de estacionamiento:\n\n");
					fflush(stdin);
					scanf("%s", &stc);
					break;
					
				case 8:
					printf( "\n\n  Ingrese el tipo de devolucion:\n\n");
					fflush(stdin);
					scanf("%s", &dev);
					break;	
					
				case 9:
					printf("***Gracis por su visita***\n\n");
			    	printf( "\n Boletos:%d\n", bol);
					printf( "\n Pelicula:%s\n", peli);
					printf( "\n Sala:%s\n", sal);
					printf( "\n Producto(s):%s\n", candy);
					printf( "\n Promocion:%s\n", promo);
					printf( "\n Descuento:%s\n", des);
					printf( "\n Estacionamiento:%s\n", stc);
					printf( "\n Devolucion:%s\n", dev);
					break;	

				case 10:
					printf( "\n Bienvenido! consulte el siguiente FAQ del sistema:\n");
					break;				
				
				case 11:
				printf("SALIR:)");
				break;
				
					default:
					printf("\nOpcion invalida!! 'intente de nuevo'\n");
					break;				
			}
			
		system("pause");		
		}while(num!=11);
					
    
    return 0;
}
