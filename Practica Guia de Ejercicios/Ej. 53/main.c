#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*53. En urca empresa hay 50 empleados de los
cuales se van registrando en n�mero de. legajo y el c�digo de
sexo (1 si es femenino y 2 pa-a masculino).
 Dise�ar en un programa que permites imprimir los n�meros
de legajo de las mujeres y mostrar
por pantalla el total de hombres ingresados
*/

//Aclaracion: el for para asignar legajos al array fue tomado de una explicacion en internet
//Igual no anda :)
int main()
{
    int legajo;
    int sexo;
    int cont=45;
    int legMujeres[50];
    int contHombres=0;
    int i,j;


    do{
        printf("Ingrese el sexo del empleado. 1 femenino, 2 masculino: ");
        scanf("%d", &sexo);

        if(sexo!=1 && sexo!=2){
            printf("Ingrese un sexo valido. 1 femenino, 2 masculino: ");
            scanf("%d", &sexo);
        }
        else
        {
            if(sexo==1){
                printf("Ingrese el legajo: ");
                scanf("%d", &legajo);

                while(legajo<1000 || legajo>9999){
                    printf("Ingrese legajo valido: ");
                    scanf("%d", &legajo);
                }
                for ( i = 0; i < 50; i++ ) {
                    legMujeres[i] = legMujeres; /* set element at location i to i + 100 */
                    }
                system("cls");

                }
            else{

                contHombres++;

                printf("Ingrese el legajo: ");
                scanf("%d", &legajo);

                while(legajo<1000 || legajo>9999){
                    printf("Ingrese legajo valido: ");
                    scanf("%d", &legajo);
                }
            system("cls");
            }
        }

        cont++;

    }while(cont<50);

    printf("Cantidad de empleados hombres: %d", contHombres);
    for (j = 0; j < 50; j++ ) {
      printf("Element[%d] = %d\n", j, legMujeres[j] );
   }

    return 0;
}
